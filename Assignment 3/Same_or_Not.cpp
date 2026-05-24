#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    stack<int> s;
    queue<int> q;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        s.push(a);
    }
    for(int i=0;i<m;i++)
    {
        int a;
        cin>>a;
        q.push(a);
    }
    if(n!=m)
    {
        cout<<"NO";
    }
    else
    {
        int a,b,flg=0;
        while(!s.empty())
        {
            a=s.top();
            b=q.front();
            if(a!=b)
            {
                flg=1;break;
            }
            s.pop();
            q.pop();
        }
        if(flg==1)
        {
            cout<<"NO";
        }
        else
        {
            cout<<"YES";
        }
    }
    return 0;
}