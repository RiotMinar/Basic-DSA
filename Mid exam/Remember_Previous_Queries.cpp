#include <bits/stdc++.h>
using namespace std;

int main()
{
    list <int> a;
    int n;
    cin>>n;
    while(n--)
    {
        int c,x;
        cin>>c>>x;
        if(c==0)
        {
            a.push_front(x);
            cout<<"L -> ";
            for(int i:a)cout<<i<<" ";
            cout<<endl;
            a.reverse();
            cout<<"R -> ";
            for(int i:a)cout<<i<<" ";
            cout<<endl;
            a.reverse();
        }
        else if(c==1)
        {
            a.push_back(x);
            cout<<"L -> ";
            for(int i:a)cout<<i<<" ";
            cout<<endl;
            a.reverse();
            cout<<"R -> ";
            for(int i:a)cout<<i<<" ";
            cout<<endl;
            a.reverse();
        }
        else
        {
            if(a.empty()!=true)
            { 
                if(x==0)
                {
                    a.pop_front();
                }
                else if(x==a.size()-1)
                {
                    a.pop_back();
                }
                else if(x<a.size())
                {
                    a.erase(next(a.begin(),x));
                }
            }
            cout<<"L -> ";
            for(int i:a)cout<<i<<" ";
            cout<<endl;
            a.reverse();
            cout<<"R -> ";
            for(int i:a)cout<<i<<" ";
            cout<<endl;
            a.reverse();
        }
    }
    return 0;
}