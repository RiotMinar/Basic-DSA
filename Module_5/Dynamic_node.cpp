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
    node *a= new node(10);
    node *b= new node(10);
    node *c= new node(10);
    a->next=b;
    b->next=c;
    cout<<a->val<<" "<<a->next->val<<" "<<a->next->next->val;
    return 0;
}