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
bool cmp(node* head,node* head2)
{
    node* tmp=head,*tmp2=head2;
    while(tmp!=NULL)
    {
        if(tmp->val!=tmp2->val)
        {
            return false;
        }
        tmp=tmp->next;
        tmp2=tmp2->next;
    }
    return true;
    
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
int main()
{
    int val;
    node* head=NULL,*head2=NULL;
    node* tail=NULL,*tail2=NULL;
    int n1=0,n2=0;
    while(true)
    {
        cin>>val;
        if(val==-1)
        {
            break;
        }
        insert(head,tail,val);
        n1++;
    }
    while(true)
    {
        cin>>val;
        if(val==-1)
        {
            break;
        }
        insert(head2,tail2,val);
        n2++;
    }
    if(n1!=n2)
    {
        cout<<"NO";
    }
    else
    {
        bool ans=cmp(head,head2);
        if(ans==true)
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
    }
    
    return 0;
}