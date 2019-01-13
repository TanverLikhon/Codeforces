#include<bits/stdc++.h>
using namespace std;

int ck;
int main()
{
    int n;
    cin>>n;
    map<int ,int>mp;
    for(int i=1;i<=n;i++)
    {
    int x;
    cin>>x;
    if(x>0)
    mp[x]=1;

    }
    cout<<mp.size()<<endl;
    return 0;
}
