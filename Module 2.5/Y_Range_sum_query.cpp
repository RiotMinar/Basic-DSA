#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,q;
    cin>>n>>q;
    int a[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    long long int pre[n];
    pre[1]=a[1];
    for(int i=2;i<=n;i++)
    {
        pre[i]=pre[i-1]+a[i];
    }
    while(q--)
    {
        int l,r;
        long long int sum=0;
        cin>>l>>r;
        if(l==1)
        {
            sum=pre[r];
        }
        else
        {
            sum=pre[r]-pre[l-1];
        }
        cout<<sum<<endl;

    }
    return 0;
}