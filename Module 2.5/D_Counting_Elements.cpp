#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    vector<int> b(a[n-1]+1,0);
    for(int i=0;i<n;i++)
    {
        b[a[i]]++;
    }
    int sum=0;
    for(int i=0;i<b.size()-1;i++)
    {
        if(b[i]>=b[i+1] && b[i+1]>0)
        {
            sum+=b[i];
        }
        else if(b[i]<=b[i+1] && b[i]>0)
        {
            sum+=b[i];
        }
    }
    cout<<sum;
    return 0;
}