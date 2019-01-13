
#include<iostream>
using namespace std;
int main()
{
    int n,p,q;
    cin>>n;
    bool ck;
    int arr[n]={0};

    cin>>p;
    int arrp[p];

    for(int i=0;i<p;i++)cin>>arrp[i];
            cin>>q;
    int arrq[q];
    for(int i=0;i<q;i++)cin>>arrq[i];
    for(int i=0;i<p;i++)
    {
        int x=arrp[i];
  //      int y=arrq[i];
        arr[x-1]=1;
     //   arr[y-1]=1;
    }
        for(int i=0;i<q;i++)
    {
        //int x=arrp[i];
        int y=arrq[i];
     //   arr[x-1]=1;
        arr[y-1]=1;
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0){ck=false;break;}
        else ck=true;
    }
    if(ck==false)cout<<"Oh, my keyboard!"<<endl;
    else cout<<"I become the guy."<<endl;
    return 0;

}
