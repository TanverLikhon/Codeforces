/*Never Give up*/
/*
Problem  :https://codeforces.com/contest/454/problem/B
Verdict     :AC
Time         :46ms
Memory  :400kB
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
    int arr[n];
    sf(arr[0]);
    int start=arr[0];
    int ck=0;
    int dec=n+2;
    bool flag=true;
    for(int i=1; i<n; i++)
    {
        sf(arr[i]);
        if(arr[i]<arr[i-1])
            dec=min(dec,i-1),flag=false;
    }
 //   cout<<dec<<endl;
    if(flag==false)
    {
      //cout<<dec<<"   "<<start<<endl;
        for(int i=n-1; i>dec; i--)
        {
 //cout<<arr[i]<<"  ";
            if((arr[i]<arr[i-1]&&i-1>dec)||(arr[i]>start))
            {
             //   cout<<(arr[i]<arr[i-1]&&i-1>=dec)<<endl;
              //  cout<<(arr[i]>start)<<endl;
           //cout<<"break"<<endl;
              //  cout<<arr[i]<<endl;
                pf("-1\n");
                return 0;
            }
            //  if(arr[i]>start)
        }
    }

    if(flag==true)pf("0\n");
    else    pf("%d\n",n-dec-1);
    return 0;

}

