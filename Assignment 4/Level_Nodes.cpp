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
int depth(node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    if(root->left==NULL && root->right==NULL)
    {
        return 0;
    }
    int l=depth(root->left);
    int r=depth(root->right);
    return max(l,r)+1;
}
vector<int>p;
void put(node* root,int n,int x)
{
    if(root==NULL)
    {
        return;
    }
    if(n==x)
    {
        p.push_back(root->val);
        return;
    }
    put(root->left,n+1,x);
    put(root->right,n+1,x);
}
int main()
{
    node* root=input();
    int a=depth(root);
    int x;
    cin>>x;
    if(x>a || root==NULL)
    {
        cout<<"Invalid";
    }
    else
    {
        int n=0;
        put(root,n,x);
        for(int i:p)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}