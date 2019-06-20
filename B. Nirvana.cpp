/*Never Give up*/
/*
Problem  :https://codeforces.com/contest/1143/problem/B
Verdict     :AC
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
#define sc(a) scanf("%c",&a)
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
    int n;
    sf(n);
    if(n<10)
        cout<<n<<endl;
    else
    {
        string str=to_string(n);
        //cout<<str<<endl;
        //int sz=str.size();
        ll maxx=INT_MIN;
        ll xy=1;
        for(int i=0; str[i]!='\0'; i++)
        {
            xy*=int(str[i]-'0');
            string str1=str;
            str1[i]=((str1[i]-'0')-1)+'0';
            if(str1[0]=='0')
                str1[0]='1';
            for(int j=i+1; j<str1.size(); j++)
                str1[j]='9';
            ll res=1;
            // cout<<str1<<endl;
            for(int k=0; k<str1.size(); k++)
                res*=int(str1[k]-'0');
            // cout<<res<<endl;

            maxx=max(maxx,res);
        }
        maxx=max(maxx,xy);
        //  cout<<"l "<<endl;
        cout<<maxx<<endl;
    }


    return 0;
}

