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
    int flg=0;
    for(int i=0;i<n-1;i++)
    {
        if(a[i]==a[i+1])
        {
            flg=1;
            break;
        }
    }
    if(flg==1)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}