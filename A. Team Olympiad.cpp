#include<iostream>
///accepted :)
using namespace std;
int ck1,ck2,ck3;

int minimum(int x,int y,int z)
{
    if(x<=y&&x<=z)
        return x;
    else if(y<=x&&y<=z)
        return y;
    else
        return z;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]==1)
            ck1++;
        else if(arr[i]==2)
            ck2++;
        else
            ck3++;
    }
    if(ck1==0||ck2==0||ck3==0)
    {
        cout<<0<<endl;
        return 0;
    }

    else
    {
        int x=minimum(ck1,ck2,ck3);
        cout<<x<<endl;
        for(int i=1; i<=x; i++)
        {
            for(int j=0; j<n; j++)

                if(arr[j]==1)
                {
                    cout<<j+1<<" ";
                    arr[j]=0;
                    break;
                }


            for(int j=0; j<n; j++)

                if(arr[j]==2)
                {
                    cout<<j+1<<" ";
                    arr[j]=0;
                    break;
                }


            for(int j=0; j<n; j++)

                if(arr[j]==3)
                {
                    cout<<j+1<<"\n";
                    arr[j]=0;
                    break;
                }



        }

    }
    return 0;
}
