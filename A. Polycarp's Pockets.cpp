///https://codeforces.com/contest/1003/problem/A
///100th green ac attempt
#include<bits/stdc++.h>
using namespace std;
int ck;
int main()
{
    int n,max=0;
    cin>>n;
    map<int,int>mp;
        map<int,int>::iterator it;
    for(int i=1; i<=n; i++)
    {
        int x;
        cin>>x;
        if(mp[x]>0)
    mp[x]++;
    else
        mp[x]=1;
    }
for(it=mp.begin();it!=mp.end();it++)
{
    if(it->second>max)max=it->second;
}
cout<<max<<endl;
    return 0;

}
