/*Never Give up*/
/*
Problem  :
Verdict     :
Time         :
Memory  :
*/
#include<bits/stdc++.h>
using namespace std;
#define sf(a)          scanf("%d",&a)
#define sff(a,b)         scanf("%d%d",&a,&b)
#define sfff(a,b,c)         scanf("%d%d%d",&a,&b,&c)
#define sffff(a,b,c,d)         scanf("%d%d%d%d",&a,&b,&c,&d)
#define sl(a)          scanf("%ld",&a)
#define sll(a,b)         scanf("%ld%ld",&a,&b)
#define slll(a,b,c)         scanf("%ld%ld%ld",&a,&b,&c)
#define sllll(a,b,c,d)         scanf("%ld%ld%ld%ld",&a,&b,&c,&d)
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

int main()
{
    int n,x;
    sf(n);
    v<int>vec;
    for(int i=0; i<n; i++)
        sf(x),vec.pb(x);
    int ck=1;
    int diff=0;
    int maxx=1;
    sort(vec.begin(),vec.end());
    int tmp=vec[0];
    for(int i=1; i<n; i++)
    {
        diff+=(vec[i]-tmp);
       // cout<<vec[i]<<" ";
        // cout<<"temp "<<tmp<<endl;
       // cout<<"dif "<<diff<<endl;
        if(diff>5)
        {
          //  cout<<"entered "<<vec[i]<<endl;
            if(ck>maxx)
                maxx=ck;
            diff=0;
            ck=1;
        }
        else if(diff<=5&&i<n)
        ck++;
        tmp=vec[i];
    }
    if(ck>maxx)
        maxx=ck;
    pf("%d\n",maxx);
    return 0;
}

