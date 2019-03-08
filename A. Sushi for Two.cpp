/*Never Give up*/
/*
Problem  :https://codeforces.com/contest/1138/problem/A
Verdict     :AC
Time         :31 ms
Memory  :4KB
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
    int n;
    sf(n);
    int x;
    int b=0;
    int ck=1;
    int sub1=INT_MIN;
    int c;
    int arr[3]= {0};
    sf(x);
    arr[x]++;
    c=x;
    for(int i=1; i<n; i++)
    {
  //     cout<<b<<" ";
        sf(x);
        arr[x]++;
        ck++;
        if(x!=c)
        {
            b++;
        }
        if(b==2)
        {

           // cout<<"x  "<<x<<endl;
      //   cout<<arr[1]<<"  "<<arr[2]<<endl;
            ck=1;
            b=1;
            if(x==1)
            {
                sub1=max(sub1,2*min(arr[1]-1,arr[2]));
                arr[1]=1;
                 //      cout<<arr[1]<<"  "<<arr[2]<<endl;
            }
            else
            {
                sub1=max(sub1,2*min(arr[1],arr[2]-1));
                arr[2]=1;
   //    cout<<arr[1]<<"  "<<arr[2]<<endl;
            }

        }
        else if(i==n-1)
        {
          //  en;
          //   cout<<arr[1]<<"  "<<arr[2]<<endl;
            sub1=max(sub1,2*min(arr[1],arr[2]));
        }

        c=x;
    }
    cout<<sub1<<endl;
    return 0;
}
