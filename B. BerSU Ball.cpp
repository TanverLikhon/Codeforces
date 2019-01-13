#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define pb push_back
///accepted
using namespace std;
int ck;
int main()
{
    int n,m;
    vector<int>vec;
    vector<int>vec1;
    sf("%d",&n);
    for(int i=0; i<n; i++)
    {
        int x;
        sf("%d",&x);
        vec.pb(x);
    }
    sf("%d",&m);
    for(int i=0; i<m; i++)
    {
        int x;
        sf("%d",&x);
        vec1.pb(x);
    }
    sort(vec.begin(),vec.end());
    sort(vec1.begin(),vec1.end());
    for(int i=0; i<m; i++)
        for(int j=0; j<n; j++)
            if((vec1[i]>0&&vec[j]>0)&&(vec[j]==vec1[i]||abs(vec[j]-vec1[i])==1))
            {
                vec1[i]=0;vec[j]=0;
               // cout<<vec1[i]<<endl;
                ck++;
                break;
            }

    pf("%d\n",ck);
    return 0;


}
