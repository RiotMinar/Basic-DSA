#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string s;
        getline(cin,s);
        stringstream ss(s);
        string word;
        map<string,int> mp;
        vector<string> p;
        while(ss >> word)
        {
           mp[word]++;
        }
        int max=0;
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            if(it->second>max)
            {
                max=it->second;
            }
        }
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            if(it->second==max)
            {
                p.push_back(it->first);
            }
        }
        stringstream ss2(s);
        string wd,tmp;
        vector<int>cnt(p.size(),0);
        while(ss2 >> wd)
        {
            int flg=0;
           for(int i=0;i<p.size();i++)
           {
                if(p[i]==wd)
                {
                    cnt[i]++;
                }
                if(cnt[i]==max)
                {
                    flg=1;
                    cout<<wd<<" ";
                    break;
                }
           }
           if(flg==1)break;
        }
        cout<<max;
        cout<<endl;
    }
    
    return 0;
}