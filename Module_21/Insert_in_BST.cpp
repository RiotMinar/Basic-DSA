#include <bits/stdc++.h>
using namespace std;
class node
{
    public:
    int val;
    node* left=NULL;
    node* right=NULL;
    node(int val)
    {
        this->val =val;
        this->left =NULL;
        this->right=NULL;
    }

};
node* input()
{
    int x;
    cin>>x;
    node* root;
    if(x==-1)root=NULL;
    else root=new node(x);
    queue<node*>q;
    if(root)q.push(root);
    while(!q.empty())
    {
        node* tmp=q.front();
        q.pop();
        int l,r;
        node* ln,*rn;
        cin>>l>>r;
        if(l==-1)ln=NULL;
        else ln=new node(l);
        if(r==-1)rn=NULL;
        else rn=new node(r);
        tmp->left=ln;
        tmp->right=rn;
        if(tmp->left)q.push(tmp->left);
        if(tmp->right)q.push(tmp->right);
    }
    return root;
}
void print(node* root)
{
    queue<node*> q;
    if(root)q.push(root);
    while(!q.empty())
    {
        node* tmp=q.front();
        q.pop();
        cout<<tmp->val<<" ";
        if(tmp->left)q.push(tmp->left);
        if(tmp->right)q.push(tmp->right);
    }
}
void insert(node* root,int val)
{
    if(root==NULL)
    {
        root=new node(val);
        return;
    }
    if(val<root->val)
    {
        if(root->left)
            insert(root->left,val);
        else root->left=new node(val);
    }
    else
    {
        if(root->right)
            insert(root->right,val);
        else root->right=new node(val);
    }
}
int main()
{
    node* root=input();
    int k;
    cin>>k;
    insert(root,k);
    print(root);
    return 0;
}