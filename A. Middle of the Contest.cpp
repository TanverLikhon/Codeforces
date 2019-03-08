/*Never Give up*/
/*
Problem  :https://codeforces.com/contest/1133/problem/A
Verdict     :AC
Time         :31 ms	0 KB
Memory  :
*/
#include<bits/stdc++.h>
using namespace std;
#define sf(a)          scanf("%d",&a)
#define sff(a,b)         scanf("%d%d",&a,&b)
#define sfff(a,b,c)         scanf("%d%d%d",&a,&b,&c)
#define sffff(a,b,c,d)         scanf("%d%d%d%d",&a,&b,&c,&d)

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
    int h,m,h1,m1;
    char ch;
    sf(h);
    scanf("%c",&ch);
    sf(m);
    sf(h1);
    scanf("%c",&ch);
    sf(m1);


    int h3=h1-h;
    int m3=m1-m;
    int x=h3*60+m3;
    //cout<<x<<endl;
    x/=2;
    h3=h+x/60;
    m3=m+x%60;
    if(m3>59)
    {
        h3+=m3/60;
        m3=m3%60;
    }
    if(h3<10)
        pf("0%d:",h3);
    else
        pf("%d:",h3);

    if(m3<10)
        pf("0%d\n",m3);
    else
        pf("%d\n",m3);
    return 0;
}

