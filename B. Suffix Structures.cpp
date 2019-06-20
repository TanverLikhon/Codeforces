/*Never Give up*/
/*
Problem  :https://codeforces.com/problemset/problem/448/B
Verdict     :AC
Time         :31ms
Memory  :200KB
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
    string str,str1;
    cin>>str>>str1;
    mp<char,int>ck;
    mp<char,int >ck1;
    int sz=str.size(),sz1=str1.size();
    for(int i=0; str[i]!='\0'; i++)
    {
        ck[str[i]]++;
    }
    for(int i=0; str1[i]!='\0'; i++)
    {
        ck1[str1[i]]++;
    }
    if(sz>sz1)
    {
        bool flag =true;
        int c=0;
        for(int i=0; str1[i]!='\0'; i++)
        {
            bool ff=true;
            for(int j=c; str[j]!='\0'; j++)
            {
                if(str1[i]==str[j])
                {
                    c=j+1;
                    ff=false;
                    break;
                }
            }
            if(ff)
            {
                bool gg=true;
                for(int k=0; str1[k]!='\0'; k++)
                {
                    if(ck1[str1[k]]>ck[str1[k]])
                    {
                        pf("need tree\n");
                        return 0;
                    }
                }
                pf("both\n");return 0;
            }
        }
        pf("automaton\n");return 0;
    }
    else
    {
        sort(str.begin(),str.end());
        sort(str1.begin(),str1.end());
        if(str1==str)
            pf("array\n");
        else
            pf("need tree\n");
    }

    return 0;
}

