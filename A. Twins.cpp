
#include<iostream>
using namespace std;
int ck;
void bubble_sort(int arr[],int n)
{
    int temp,j;
    for(int i=1; i<n; i++)
    {
        for(j=0; j<n-i; j++)
        {
            if(arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]);
        }
    }
}
int sum(int arr[],int n)
{
    int s=0;
    for(int i=0; i<n; i++)
        s=s+arr[i];
    return s;
}
int minimumcoin(int arr[],int n,int s)
{
    int i,x=0;
   // cout<<s;
    for( i=n-1; i>=0; i--)//i>=n/2+1 not accepted in cf but correct on codeblocks
    {
        x=x+arr[i];
        ck++;
        if(x>s/2)
        {
              return ck;
              break;
        }

    }

}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    bubble_sort(arr,n);
    int x=sum(arr,n);
   // cout<<x<<endl;
  int y=minimumcoin(arr,n,x);
  cout<<y<<endl;

return 0;
}
