//https://codeforces.com/contest/1106/problem/C
/*Never Give up*/
#include<bits/stdc++.h>
using namespace std;
#define sf          scanf
#define pf         printf
#define ll           long long
#define ull        unsigned long long
#define pb        push_back
#define v           vector
#define l            list
#define pi          pair
#define mp         map
#define nl         printf("\n")
#define en        pf("Entered\n")
//int dx[] = {-1, 0, 1, 0};
//int dy[] = {0, 1, 0, -1};

//accepted
int main()
{
    int n;
    v<int>vec;
    ll sum=0;
    sf("%d",&n);
    while(n--)
    {
        int x;
        cin>>x;
        vec.pb(x);
    }
sort(vec.begin(),vec.end());
//for(int i=0;i<vec.size();i++)cout<<vec[i]<<" ";
    int sz=vec.size()/2;
    for(int i=0; i<sz; i++)
    {
        //cout<<vec[i]<<"  "<<vec[sz*2-i-1]<<endl;
        sum+=ceil(pow(vec[i]+vec[sz*2-i-1],2));

    }
    cout<<sum<<endl;
    return 0;
}

