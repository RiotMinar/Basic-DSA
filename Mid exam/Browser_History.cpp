#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<string> a;
    while(true)
    {
        string n;
        cin>>n;
        if(n=="end")
        {
            break;
        }
        a.push_back(n);
    }
    int q;
    cin>>q;
    while(q--)
    {
        string c,s;
        int idx;
        cin>>c;
        if(c=="visit")
        {
            cin>>s;
            auto it=find(a.begin(),a.end(),s);
            if(it==a.end())
            {
                cout<<"Not Available";
            }
            else
            {
                int cnt=0;
                for(string i:a)
                {
                    if(i==s)
                    {
                        idx=cnt;
                        break;
                    }
                    cnt++;
                }
                cout<<*it;
            }
        }
        else if(c=="next")
        {
            idx++;
            if(idx<a.size())
            {
                cout<<*next(a.begin(),idx);
            }
            else
            {
                cout<<"Not Available";
                idx--;
            }
        }
        else
        {
            idx--;
            if(idx>=0)
            {
                cout<<*next(a.begin(),idx);
            }
            else
            {
                cout<<"Not Available";
                idx++;
            }
        }
        cout<<endl;
    }
    return 0;
}