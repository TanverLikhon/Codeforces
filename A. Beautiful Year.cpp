#include<iostream>
#include<cstdlib>
#include<bits/stdc++.h>
using namespace std;

int distinct(int y)
{
    int arr[10]={0};
    int year,r,i;
    bool flag=true;
    year=y;


    while(year!=0)
    {
        r=year%10;
        arr[r]++;
        year=year/10;
    }
    for(i=0; i<10; i++)
    {
        if(arr[i]>1)
        {
            flag=false;
            break;
        }

    }
    if(flag==false)
        return distinct(y+1);
    else
        return y;


}

int main()
{
    int y,z,r;
    cin>>y;
    cout<<distinct(y+1)<<endl;
    return 0;

}
