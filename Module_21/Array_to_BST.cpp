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
node* convert(int a[],int n,int l,int r)
{
    if(l>r)
        return NULL;
    int mid=(l+r)/2;
    node* root=new node(a[mid]);
    node* leftroot=convert(a,n,l,mid-1);
    node* rightroot=convert(a,n,mid+1,r);
    root->left=leftroot;
    root->right=rightroot;
}
void print(node* root)
{
    if(root==NULL)
        return;
    queue<node*>q;
    q.push(root);
    while(!q.empty())
    {
        node* t=q.front();
        q.pop();
        cout<<t->val<<" ";
        if(t->left)q.push(t->left);
        if(t->right)q.push(t->right);
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    node* root=convert(a,n,0,n-1);
    print(root);
    return 0;
}