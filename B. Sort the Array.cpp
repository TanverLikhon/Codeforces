/*Never Give up*/
/*
Problem  :https://codeforces.com/problemset/problem/451/B
Verdict     :AC
Time         :46ms
Memory  :400KB
*/
//learned new trick :)
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
    for(int i=0; i<n; i++)
        sf(arr[i]);
    int start=0,end=n-1;
    for(int i=1; i<n; i++)
    {
        if(arr[i]<arr[i-1])
        {
            start=i-1;
            break;
        }
    }//en;
//int i=n-1;
    for(int i=n-1; i>=1; i--)
    {
        if(arr[i]>arr[i-1]&&i-1>=start)
        {
            //cout<<"found"<<endl;
         //   cout<<arr[i]<<endl;
      //      cout<<i-1<<endl;
            end=i-1;
        }
    }
  // cout<<start<<"  "<<end<<endl;
    //cout<<end<<endl;
    sort(arr+start,arr+end+1);
  //  cout<<"print"<<endl;
//for(int i=0;i<n;i++)
 //  cout<<arr[i]<<" ";
    for(int i=1; i<n; i++)
        if(arr[i]<arr[i-1])
        {
            pf("no\n");
            return 0;
        }//en;

    /*while(arr[i]>arr[i-1]&&i-1>=0)
    {en;
        end=i-1;i--;
    }*/
    pf("yes\n%d %d\n",start+1,end+1);
    //cout<<start<<"   "<<end<<endl;
    return 0;
}

