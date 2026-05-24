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
    node* newnode = new node(val);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
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
        cout<<tmp->val;
        tmp=tmp->next;
        cout<<endl;
    }
}
int f_max(node* head)
{
    int max=0;
    node* tmp=head;
    while(tmp!=NULL)
    {
        if(tmp->val>max)
        {
            max=tmp->val;
        }
        tmp=tmp->next;
    }
    return max;
}
int f_min(node* head)
{
    int min=INT_MAX;
    node* tmp=head;
    while(tmp!=NULL)
    {
        if(tmp->val<min)
        {
            min=tmp->val;
        }
        tmp=tmp->next;
    }
    return min;
}
int main()
{
    int val;
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
    }
    int max=f_max(head);
    int min=f_min(head);
    cout<<max-min;
    return 0;
}