#include<iostream>
#include<bits/stdc++.h>
///tas
using namespace std;
int main()
{
    int n,k,j,min=0,sum,ck=0;
    cin>>n>>k;
    getchar();
    char a[n];
    gets(a);
    for(int i=1; i<strlen(a); i++)
    {
        for(int j=0; j<strlen(a)-i; j++)
        {

            if(a[j]>a[j+1])
                swap(a[j],a[j+1]);
        }
    }
    puts(a);
    if(k==1)
    {
        sum=a[0]-96;
    }
    else
    {
        for(int i=0; a[i]!='\0'; i++)
        {
            sum=a[i]-96;
            j=i+1;
for(int m=1;m<k;){
       if(a[j]!='\0'&&(a[j]-a[i])>1)
            {
                sum=sum+a[j]-96;
             m++;
             i=j;
             j++;
            }
            else
            {
              // i=j-1;
                if(sum<min)
                    min=sum;
                    break;
            }
}
        }

    }

    cout<<sum<<endl;
    //else cout<<-1;
    return 0;

}

