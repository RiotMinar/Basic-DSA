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
void insert(node* &head,node*&tail,int val)
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
void print(node* head)
{
    node* tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
}
int main()
{
    node* head=NULL;
    node* tail=NULL;
    while(true)
    {
        int val;
        cin>>val;
        if(val==-1)
        {
            break;
        }
        insert(head,tail,val);
    }
    int flg=0;
    for(node* i=head,*j=tail;i!=j;i=i->next,j=j->prev)
    {
        if(i->val!=j->val)
        {
            flg=1;
        }
    }
    if(flg==1)
    {
        cout<<"NO";
    }
    else
    {
        cout<<"YES";
    }
    return 0;
}