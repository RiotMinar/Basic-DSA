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
class que
{
    public:
    node *head=NULL;
    node *tail=NULL;
    int sz=0;
    void push(int val)
    {
        sz++;
        node* newnode=new node(val);
        if(head==NULL)
        {
            head=newnode;
            tail=newnode;
            return;
        }
        tail->next=newnode;
        newnode->prev=tail;
        tail=newnode;
    }
    void pop()
    {
        node* dlt=head;
        head=head->next;
        if(head==NULL)
        {
            tail=NULL;
            return;
        }
        head->prev=NULL;
        delete dlt;
        sz--;
        
    }
    bool empty()
    {
        return head==NULL;
    }
    int front()
    {
        return head->val;
    }
    int size()
    {
        return sz;
    }
};
class stk
{
    public:
    node *head=NULL;
    node *tail=NULL;
    int sz=0;
    void push(int val)
    {
        sz++;
        node* newnode=new node(val);
        if(head==NULL)
        {
            head=newnode;
            tail=newnode;
            return;
        }
        tail->next=newnode;
        newnode->prev=tail;
        tail=newnode;
    }
    void pop()
    {
        node* dlt=tail;
        tail=tail->prev;
        if(tail==NULL)
        {
            head=NULL;
            return;
        }
        tail->next=NULL;
        delete dlt;
        sz--;
    }
    bool empty()
    {
        return head ==NULL;
    }
    int top()
    {
        return tail->val;
    }
    int size()
    {
        return sz;
    }
};
int main()
{
    stk s;
    que q;
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        s.push(a);
    }
    for(int i=0;i<m;i++)
    {
        int b;
        cin>>b;
        q.push(b);
    }
    if(n!=m)
    {
        cout<<"NO";
    }
    else
    {
        int flg=0;
        while(!s.empty())
        {
            int b=q.front();
            int a=s.top();
            if(a!=b)
            {
                flg=1;
                break;
            }
            s.pop();
            q.pop();
        }
        if(flg==0)
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