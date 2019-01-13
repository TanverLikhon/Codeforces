
#include<iostream>
using namespace std;


int main()
{

    int ck=0,ck1=0;
    int n;
    cin>>n;
    int arr[3];
    for(int i=0; i<3; i++)
        cin>>arr[i];


    int i=0;
    int x=n;
    while(n!=0)
    {

        if(arr[i]==x)
            ck1++;
        else if(arr[i]<=n)
        {
            ck=ck+n/arr[i];
            n=n%arr[i];
        }
        if(ck1>=2||i==3||(i<=2&&n<arr[i+1]))
            break;
        i++;
    }
    //cout<<ck<<" "<<ck1<<endl;
    if(ck1==2)
        cout<<1<<endl;
    else
        cout<<ck<<endl;
    return 0;
}
