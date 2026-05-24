#include <bits/stdc++.h>
using namespace std;
class node
{
    public:
    int val;
    node *next;
    node* prev;
    node(int val)
    {
        this->val =val;
        this->next =NULL;
        this->prev=NULL;
    }

};
void print_node(node* head)
{
    node* tmp=head;
    while (tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}
void print_rev(node* tail)
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
    node* head =new node(10);
    node* a =new node(20);
    node* tail =new node(30);
    head->next=a;
    a->prev=head;
    a->next=tail;
    tail->prev=a;
    print_node(head);
    print_rev(tail);
    return 0;
}