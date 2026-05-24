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
    node* tmp=head;
    while(tmp!=NULL)
    {   
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
}
void reverse(node* &head,node* tmp)
{
    if(tmp->next==NULL)
    {
        head=tmp;
        return;
    }
    reverse(head,tmp->next);
    tmp->next->next=tmp;
    tmp->next=NULL;
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
    reverse(head,head);
    print(head);
    return 0;
}