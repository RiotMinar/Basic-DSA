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
void insert(node* &head,node* &tail,int val)
{
    node* newnode=new node(val);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    tail=newnode;
}
void print(node* head)
{
    node*tmp =head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
}
void dlt(node* &head)
{
    for(node* i=head;i->next->next!=NULL;i=i->next)
    {
        cout<<i->val<<" ";
        for(node* j=i;j->next->next!=NULL;j=j->next)
        {
            cout<<j->val<<" ";
            if(i->val==j->next->val)
            {
                
            }
        }
        cout<<endl;

    }
}
void dlt_at_tail(node* &head,node* &tail)
{
    for(node* i=head;i->next!=NULL;i=i->next)
    {
    
        if(i->val==tail->val)
        {
            node* tmp=head;
            while(true)
            {
                if(tmp->next==NULL)
                {
                    break;
                }
                cout<<tmp->val<<" ";
                tmp=tmp->next;
            }
            return;
        }
    }
    print(head);
}
void dlt_at_any(node* head,int idx)
{
    node* tmp=head;
    for(int i=0;i<idx-1;i++)
    {
        tmp=tmp->next;
    }
    node* dltnode=tmp->next;
    tmp->next=dltnode->next;
    delete dltnode;

}
int main()
{
    int val;
    vector<int>c;
    node* head=NULL;
    node* tail=NULL;
    while(true)
    {
        cin>>val;
        if(val==-1)
        {
            break;
        }
        insert(head,tail,val);
        c.push_back(val);
    }
    int max=0;
    for(int i=0;i<c.size();i++)
    {
        if(c[i]>max)
        {
            max=c[i];
        }
    }
    for(int i=0;i<c.size()-1;i++)
    {
        for(int j=i+1;j<c.size();j++)
        {
            if(c[i]==c[j])
            {
                dlt_at_any(head,j);
                c.erase(c.begin()+j);
                j--;
            }
        }
    }
    // cout<<max;
    // vector<int> idx(max+1,0);
    // for(int i=0;i<c.size();i++)
    // {
    //     idx[c[i]]++;
    // }
    // for(int i:idx)cout<<i<<" ";
    // dlt(head);
    // dlt_at_tail(head,tail);
    print(head);
    return 0;
}