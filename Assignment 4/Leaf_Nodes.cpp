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
vector<int> p;
void sum(node* root)
{
    if(root==NULL)
    {
        return ;
    }
    if(root->left==NULL && root->right==NULL)
    {
        p.push_back(root->val);
        return ;
    }
    sum(root->right);
    sum(root->left);

}
int main()
{
    node* root=input();   
    sum(root);
    sort(p.begin(),p.end());
    reverse(p.begin(),p.end());
    for(int i:p)
    {
        cout<<i<<" ";
    }
    return 0;
}