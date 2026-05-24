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
void insert(node* &head,node* &tail,int x)
{
    node* newnode = new node(x);
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
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
}
void insert_h(node* &head,node* &tail,int val)
{
    node* newnode=new node(val);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    newnode->next=head;
    head=newnode;
}
void delete_at_any(node* &head,int idx)
{
    node*tmp=head;
    for(int i=0;i<idx-1;i++)
    {
        tmp=tmp->next;
    }
    node* deletenode=tmp->next;
    tmp->next=deletenode->next;
    delete deletenode;
}
void dlt_at_tail(node* &head,node* &tail,int idx)
{
     node*tmp=head;
    for(int i=0;i<idx-1;i++)
    {
        tmp=tmp->next;
    }
    node* deletenode=tmp->next;
    tmp->next=deletenode->next;
    delete deletenode;
    tail=tmp;
}
void delete_at_head(node* &head)
{
    node* dltnode=head;
    head=head->next;
    delete dltnode;
}
int main()
{
    int t,cnt=-1;
    cin>>t;
    node* head=NULL;
    node* tail=NULL;
    for(int i=0;i<t;i++)
    {
        int val=0,x=0;
        cin>>val>>x;
        if(val==0)
        {
            insert_h(head,tail,x);
            cnt++;
            print_node(head);
        }
        else if(val==1)
        {
            insert(head,tail,x);
            cnt++;
            print_node(head);
        }
        else if(val==2)
        {
            if(x>cnt)
            {
                print_node(head);
            }
            else
            {
                if(x==0)
                {
                    delete_at_head(head);
                    cnt--;
                }
                else if(x==cnt)
                {
                    dlt_at_tail(head,tail,x);
                    cnt--;
                }
                else
                {
                    delete_at_any(head,x);
                    cnt--;
                }
                print_node(head);
            }
        }
        cout<<endl;
        
    }
    
    return 0;
}