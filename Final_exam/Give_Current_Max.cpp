#include <bits/stdc++.h>
using namespace std;
class node
{
    public:
    int val;
    int roll;
    string name;
    node(string name,int val,int roll)
    {
        this->val =val;
        this->name =name;
        this->roll=roll;
    }

};
class cmp
{
    public:
    bool operator()(node l,node r)
    {
        if(l.val<r.val)
            return true;
        else if(l.val>r.val)
            return false;
        else
            return l.roll>r.roll;
        
    }
};
int main()
{
    int n;
    cin>>n;
    priority_queue<node,vector<node>,cmp>p;
    while(n--)
    {
        string s;
        int r,m;
        cin>>s>>r>>m;
        node student(s,m,r);
        p.push(student);
    }
    int q;
    cin>>q;
    while(q--)
    {
        int t;
        cin>>t;
        if(t==0)
        {
            string s;
            int r,m;
            cin>>s>>r>>m;
            node student(s,m,r);
            p.push(student);
            cout<<p.top().name<<" "<<p.top().roll<<" "<<p.top().val;
        }
        else if(t==1)
        {
            if(p.empty())cout<<"Empty";
            else cout<<p.top().name<<" "<<p.top().roll<<" "<<p.top().val; 
        }
        else
        {
            if(p.empty())cout<<"Empty";
            else
            {
                p.pop();
                if(p.empty())cout<<"Empty";
                else cout<<p.top().name<<" "<<p.top().roll<<" "<<p.top().val; 
            }
        }
        cout<<endl;
    }
    return 0;
}