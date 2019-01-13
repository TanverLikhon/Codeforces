#include<iostream>
using namespace std;

int main()
{
    int j,n,max=0,ck=1,k=0;
    cin>>n;
    unsigned long arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];

    for(int i=0; i<n; i++)
    {
        j=i+1;
        if(arr[j]>=arr[i]&&j<n)
        {
            ck++;
           // cout<<"ck "<<ck;
        }
        else
        {
            if(ck>max)
                max=ck;
            ck=1;
            i=j-1;
            k++;
            //cout<<" K ="<<k<<"c[k]= "<<c[k]<<endl;

        }


    }
    /*  k=0;
      while(c[k]!=0)
      {
          max=c[k];
          if(c[k]>max)
              max=c[k];
          k++;

      }*/
    cout<<max<<endl;
    return 0;

}
