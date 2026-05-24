#include <bits/stdc++.h>
using namespace std;
class buk
{
    public:
    string name;
    int roll;
};
bool cmp(buk l,buk r)
{
    if(l.name<r.name)
        return true;
    else if(l.name>r.name)
        return false;
    else return l.roll>r.roll;
}
int main()
{
    int n;
    cin>>n;
    buk a[n];
    for(int i=0;i<n;i++)
    {
       cin>>a[i].name>>a[i].roll; 
    }
    sort(a,a+n,cmp);
    for(int i=0;i<n;i++)
    {
       cout<<a[i].name<<" "<<a[i].roll<<endl;
    }
    return 0;
}