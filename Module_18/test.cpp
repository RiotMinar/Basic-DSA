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
void print(node* root)
{
    if(root==NULL)
    {
        cout<<"NO root";
        return;
    }
   queue<node*> q;
   q.push(root);
   while(!q.empty())
   {
    node* tmp=q.front();
    q.pop();
    cout<<tmp->val<<" ";
    if(tmp->left)
        q.push(tmp->left);
    if(tmp->right)
        q.push(tmp->right);
   }
}
node* input()
{
    int x;
    cin>>x;
    node* root;
    if(x==-1)root=NULL;
    else root=new node(x);
    queue<node*> q;
    if(root)q.push(root);
   while(!q.empty())
   {
    node* tmp=q.front();
    q.pop();
    int l,r;
    cin>>l>>r;
    node* ln,*rn;
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
vector<int> leaf(node* root)
{
    vector<int> tmp;
    if(root==NULL)
    {
        return tmp;
    }
     if(root->left==NULL && root->right==NULL)
    {
        return tmp;
    }
    tmp=leaf(root->left);
    tmp=leaf(root->right);
    tmp.push_back(root->val);
}
int main()
{
    node* root=input();
    // print(root);
    vector<int> p=leaf(root);
    for(int i:p)
    {
        cout<<i<<endl;
    }
    return 0;
}