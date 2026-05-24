#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<string> q;
    int t;
    cin>>t;
    while(t--)
    {
        int c;
        string a;
        cin>>c;
        if(c==0)
        {
            cin>>a;
            q.push(a);
        }
        else
        {
            if(q.empty())
            {
                cout<<"Invalid";
            }
            else
            {
                string b=q.front();
                cout<<b;
                q.pop();
            }
            cout<<endl;
        }
    }
    
    return 0;
}