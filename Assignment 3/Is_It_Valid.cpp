#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        stack <char> s;
        queue <char> q;
        string a;
        cin>>a;
        for(int i=0;i<a.size();i++)
        {
            q.push(a[i]);
        }
        while(!q.empty())
        {
            s.push(q.front());
            q.pop();
            while((s.top()=='0' && q.front()=='1') || (s.top()=='1' && q.front()=='0'))
            {
                q.pop();
                s.pop();
                if(q.empty()||s.empty())
                {
                    break;
                }
            }
        }
        if(s.empty())
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
        cout<<endl;
    }
    return 0;
}