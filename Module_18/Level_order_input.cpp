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
int main()
{
    node* root=input();
    print(root);
    return 0;
}