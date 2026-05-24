#include <bits/stdc++.h>
using namespace std;
class node
{
    public:
    int val;
    node *next;
    node(int val)
    {
        this->val =val;
        this->next =NULL;
    }

};
void any(node* &head,int idx)
{
    node* tmp=head;
    for(int i=0;i<idx-1;i++)
    {
        tmp=tmp->next;
    }
    cout<<tmp->val;
}
int main()
{
    list<int> a;
    while(true)
    {
        int val;
        cin>>val;
        if(val==-1)
        {
            break;
        }
        a.push_back(val);
    }
    a.erase(next(a.begin(),1));
    cout<<"L -> ";
    for(int i:a)cout<<i<<" ";
    cout<<endl;
    a.reverse();
    cout<<"R -> ";
    for(int i:a)cout<<i<<" ";
    cout<<endl;
    a.reverse();
    return 0;
}