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
#define sl(a)          scanf("%lld",&a)
#define sll(a,b)         scanf("%lld%lld",&a,&b)
#define slll(a,b,c)         scanf("%lld%lld%lld",&a,&b,&c)
#define sllll(a,b,c,d)         scanf("%lld%lld%lld%lld",&a,&b,&c,&d)
#define sc(a) scanf("%c",&a)
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pf         printf
#define ll           long long
#define ull        unsigned long long
#define pb        push_back
#define vi           vector<int>
#define vl           vector<ll>
#define li            list<int>
#define pi          pair<int,int>
#define pl          pair<ll,ll>
#define mp         map
#define nl         printf("\n")
#define en        pf("Entered\n")
//int dx[] = {-1, 0, 1, 0};
//int dy[] = {0, 1, 0, -1};

int main()
{
    int n;
    sf(n);
    string str;
    cin>>str;
    int l=-1,r=-1;
    char ch=char(123);

    for(int i=0; i<n-1; i++)
    {
        if(str[i]<ch);
        else
        {
            for(int j=i+1; j<n; j++)
            {
                ch=min(ch,str[j]);
               // cout<<ch<<endl;
                //    cout<<str[i]<<"  "<<str[j]<<endl;
                if(str[i]>str[j])
                {
                    l=i,r=j;
                    pf("YES\n%d %d\n",l+1,r+1);
                    return 0;
                }
            }
        }
    }
    if(l==-1&&r==-1)
        pf("NO\n");
    return 0;
}

