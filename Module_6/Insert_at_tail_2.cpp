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
void insert_at_tail(node* &head,node* &tail,int val)
{
    node* newnode = new node(val);
    if(head==NULL)
    {
        head=newnode;
        return;
    }
    tail->next=newnode;
    tail=newnode;
}
void print_node(node* head)
{
    node* tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<endl;
        tmp=tmp->next;
    }
}
int main()
{
    node* head=new node(10);
    node* a=new node(20);
    node* tail=new node(30);
    head->next=a;
    a->next=tail;
    insert_at_tail(head,tail,1000);
    insert_at_tail(head,tail,50);
    insert_at_tail(head,tail,60); 
    print_node(head);
    // cout<<tail->val;
    return 0;
}