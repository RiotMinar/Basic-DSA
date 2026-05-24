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
int f_x(node* head,int x)
{
    int idx=0;
    node* tmp=head;
    while(tmp!=NULL)
    {
        if(tmp->val==x)
        {
            return idx;
        }
        tmp=tmp->next;
        idx++;
    }
    return -1;
    
}
int main()
{
    int t;
    cin>>t;
    while (t--)
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
        int x;
        cin>>x;
        // int ans=f_x(head,x);
        // cout<<ans<<endl;
        int idx=-1,flg=0;
        node* tmp=head;
        while(tmp!=NULL)
        {
            idx++;
            if(tmp->val==x)
            {
                flg=1;
                break;
            }
            tmp=tmp->next;
        }
        if(flg==1)
        {
            cout<<idx;
        }
        else
        {
            cout<<-1;
        }
        cout<<endl;
    }
    

    return 0;
}