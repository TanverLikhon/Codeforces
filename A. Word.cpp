#include <bits/stdc++.h>
using namespace std;
int ck1,ck2;
int main()
{
    string str1,str2;
    //gets(str1);
    cin>>str1;
    for(int i=0;str1[i]!='\0';i++)
    {
       if(isupper(str1[i])) ck1++;
        else ck2++;
    }
    if(ck1>ck2)
    {
        for(int i=0;str1[i]!='\0';i++)
    {

   str1[i]=toupper(str1[i]);
    }

    }
    else
            for(int i=0;str1[i]!='\0';i++)str1[i]=tolower(str1[i]);
    {

   cout<<str1<<endl;
    }

    return 0;
}
