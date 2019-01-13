#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=0;
    string a;
    cin>>a;
    int ck=0;


    while(a[i]!='\0')
    {

        if(a[i]=='4'||a[i]=='7')
        {
            ck++;
        }
        i++;

    }



    if(ck==7||ck==4)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
