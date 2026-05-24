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
int main()
{
    node *a=new node(10);
    node *b=new node(20);
    node *c=new node(30);
    node *d=new node(40);
    a->next=b;
    b->next=c;
    c->next=d;
    node *tmp =a;
    while(tmp != NULL)
    {
        cout<<tmp->val<<endl;
        tmp = tmp->next;
    }
    return 0;
}