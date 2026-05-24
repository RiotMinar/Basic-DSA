#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<vector<char>> a(n, vector<char> (n,' '));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j && i+j==n-1)
            {
                a[i][j]='X';
            }
            else if(i==j)
            {
                a[i][j]='\\';
            }
            else if(i+j==n-1)
            {
                a[i][j]='/';
            }

        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
           cout<<a[i][j];

        }
        cout<<endl;
    }
    return 0;
}