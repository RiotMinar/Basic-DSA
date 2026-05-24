#include <bits/stdc++.h>
using namespace std;
class node
{
    public:
    int val;
    node *next;
    node *prev;
    node(int val)
    {
        this->val =val;
        this->next =NULL;
        this->prev=NULL;
    }

};
void insert_tail(node* &head,node*&tail,int val)
{
    node* newnode=new node(val);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    newnode->prev=tail;
    tail->next=newnode;
    tail=newnode;
}
void insert_head(node* &head,node* &tail,int val)
{
    node* newnode = new node(val);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    newnode->next=head;
    head->prev=newnode;
    head=newnode;
}
void insert_any(node* &head,int idx,int val)
{
    node* tmp=head;
    for(int i=0;i<idx-1;i++)
    {
        tmp=tmp->next;
    }
    node *newnode =new node(val);
    newnode->next=tmp->next;
    tmp->next->prev=newnode;
    tmp->next=newnode;
    newnode->prev=tmp;
}
void print(node* head)
{
    node* tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}
void rprint(node *tail)
{
    node* tmp=tail;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->prev;
    }
    cout<<endl;
}
int main()
{
    node* head=NULL;
    node* tail=NULL;
    int q;
    cin>>q;
    int idx=-1;
    while(q--)
    {
        int n,val;
        cin>>n>>val;
        if(n>idx+1)
        {
            cout<<"Invalid"<<endl;
        }
        else if(n==0)
        {
            insert_head(head,tail,val);
            cout<<"L -> ";print(head);
            cout<<"R -> ";rprint(tail);
            idx++;
        }
        else if(n==idx+1)
        {
            insert_tail(head,tail,val);
            cout<<"L -> ";print(head);
            cout<<"R -> ";rprint(tail);
            idx++;
        }
        else
        {
            insert_any(head,n,val);
            cout<<"L -> ";print(head);
            cout<<"R -> ";rprint(tail);
            idx++;
        }
    }
    
    return 0;
}