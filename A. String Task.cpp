#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[100];
    gets(a);

    for(int i=0;i<strlen(a);i++)
    {
        a[i]=tolower(a[i]);
    }
    for(int i=0;i<strlen(a);i++)
    {
        if(a[i]!='a'&&a[i]!='e'&&a[i]!='i'&&a[i]!='o'&&a[i]!='u'&&a[i]!='y')
            cout<<"."<<a[i];
    }
    cout<<endl;
return 0;
}
