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
        node* p=q.front();
        q.pop();
        int l,r;
        cin>>l>>r;
        node* ln,*rn;
        if(l==-1)ln=NULL;
        else ln=new node(l);
        if(r==-1)rn=NULL;
        else rn=new node(r);
        p->left=ln;
        p->right=rn;
        if(p->left)q.push(p->left);
        if(p->right)q.push(p->right);
    }
    return root;
}
int count(node *root)
{
    if(root==NULL)
    {
        return 0;
    }
    int l=count(root->left);
    int r=count(root->right);
    return l+r+1;
}
int main()
{
    node* root=input();
    cout<<count(root);
    return 0;
}