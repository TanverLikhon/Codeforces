/*Never Give up*/
/*
Problem  :https://codeforces.com/contest/508/problem/B
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
  char str[100001];
  gets(str);
  int flag=false;int ii=-1;int ck1=INT_MIN;
  int x=strlen(str)-1;char maxx='0';
  for(int i=x-1;i>=0;i--)
  {
      if(int(str[i]-'0')%2==0)
      {
          flag=true;
         if(str[i]<str[x])
         {
            // maxx=str[i];
           //  ck1=max(ck1,i);
             ii=i;
         }
         else
         ck1=max(ck1,i);

      }
  }
  //cout<<ii<<"   "<<ck1<<endl;
  if(flag)
  {
if(ii!=-1)
        swap(str[ii],str[x]);
        else
            swap(str[ck1],str[x]);
      puts(str);
  }
  else pf("-1\n");
  return 0;
}

