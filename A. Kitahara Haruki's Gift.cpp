/*Never Give up*/
/*
Problem  :https://codeforces.com/problemset/problem/433/A
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
 int n,w,one=0,two=0;
 sf(n);
 while(n--)
 {
     sf(w);
     if(w==100)one++;
     else two++;
 }
 if(two%2==0)
 {
     if(one%2==0)pf("YES\n");
     else pf("NO\n");
 }
 else
 {
     if(one-2>=0&&(one-2)%2==0)pf("YES\n");
     else pf("NO\n");
 }

 return 0;
}

