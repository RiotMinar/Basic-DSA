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
        node* t=q.front();
        q.pop();
        int l,r;
        node* ln,*rn;
        cin>>l>>r;
        if(l==-1)ln=NULL;
        else ln=new node(l);
        if(r==-1)rn=NULL;
        else rn=new node(r);
        t->left=ln;
        t->right=rn;
        if(t->left)q.push(t->left);
        if(t->right)q.push(t->right);
    }
    return root;
}
vector<int>l;
void left(node* root)
{
    if(root==NULL)
    {
        return;
    }
    if(root->left)
    {
        left(root->left);
    }
    else if(root->right)
    {
        left(root->right);
    }
    else
    {
        l.push_back(root->val);
        return;
    }
    l.push_back(root->val);
}
vector <int> r;
void right(node* root)
{
    if(root==NULL)
    {
        return;
    }
    if(root->right)
        right(root->right);
    else if(root->left)
        right(root->left);
    else
    {
        r.push_back(root->val);
        return;
    } 
    r.push_back(root->val);
}
int main()
{
    node* root=input();
    if(root->left)left(root);
    else cout<<root->val<<" ";
    if(root->right)
    {
        right(root);
        r.pop_back();
    }
    reverse(r.begin(),r.end());
    l.insert(l.end(),r.begin(),r.end());
    for(int i:l)
    {
        cout<<i<<" ";
    }
    return 0;
}