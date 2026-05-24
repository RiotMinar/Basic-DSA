#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    priority_queue<int,vector<int>,greater<int>>p;
    while(n--)
    {
        int t;
        cin>>t;
        p.push(t);
    }
    int q;
    cin>>q;
    while(q--)
    {
        int x;
        cin>>x;
        if(x==0)
        {
            int k;
            cin>>k;
            p.push(k);
            cout<<p.top();
        }
        else if(x==1)
        {
            if(p.empty())cout<<"Empty";
            else cout<<p.top();
        }
        else
        {
            if(p.empty())cout<<"Empty";
            else
            {
                p.pop();
                if(p.empty())cout<<"Empty";
                else cout<<p.top();
            }
        }
        cout<<endl;
    }
    return 0;
}