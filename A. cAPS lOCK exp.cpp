///wrong answer

#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{
string a,u,c;
    cin>>a;


int i;

for(i=0;a[i]!='\0';i++)
{
    u[i]=toupper(a[i]);
}
    c[0]=tolower(a[0]);
    for(int i=1;a[i]!='\0';i++){c[i]=toupper(a[i]);}
cout<<u;
   if(a==u||a==c){
a[0]=toupper(a[0]);
        for(int i=1;a[i]!='\0';i++)
            a[i]=tolower(a[i]);

       for(int i=0;a[i]!='\0';i++)cout<<a[i]<<endl;


    }
    else {
            cout<<a<<endl;

    }



return 0;
}
