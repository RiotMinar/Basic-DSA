#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
     while(t--)
     {
        set<int> s;
        int n;
        cin>>n;
        while(n--)
        {
            int val;
            cin>>val;
            s.insert(val);
        }
        for(auto i=s.begin();i!=s.end();i++)
        {
            cout<<*i<<" ";
        }
        cout<<endl;
     }
    return 0;
}