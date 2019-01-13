#include<bits/stdc++.h>
using namespace std;
int ck,ck1;
int main()
{
    int n;
    cin>>n;

char str[n+1];
scanf("%s",str);
for(int i=0;str[i]!='\0';i++)
{
    if(str[i]=='A')ck++;
    else ck1++;
}
//cout<<ck<< " "<<ck1<<endl;
if(ck>ck1)cout<<"Anton"<<endl;
else if(ck1>ck)cout<<"Danik"<<endl;
else cout<<"Friendship"<<endl;
return 0;
}
