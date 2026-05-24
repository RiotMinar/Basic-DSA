#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> a;
    while(true)
    {
        int val;
        cin>>val;
        if(val==-1)
        {
            break;
        }
        a.push_back(val);
    }
    a.sort();
    a.unique();
    for(int i:a)
    {
        cout<<i<<" ";
    }
    return 0;
}