#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        queue<char> q;
        stack <char>  p;
        string s;
        cin>>s;
        for(int i=0;i<s.size();i++)
        {
            q.push(s[i]);
        }
        if(q.front()=='1' || q.back()=='0')
        {
            cout<<"NO";
        }
        else
        {
            while(!q.empty())
            {
                p.push(q.front());
                q.pop();
                while(p.top()=='0' && q.front()=='1')
                {
                p.pop();
                q.pop();
                if(q.empty() || p.empty())
                {
                    break;
                }
                }
            }
            if(p.empty())
            {
                cout<<"YES";
            }
            else
            {
                cout<<"NO";
            }
        }
        cout<<endl;
    }
    return 0;
}