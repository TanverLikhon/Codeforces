#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ll long long
#define pb push_back

int main()
{
    map<char,char>mp;
char str1[27],str2[27],str3[10001];
gets(str1);gets(str2);gets(str3);

for(int i=0;i<26;i++)
    mp[str1[i]]=str2[i];

    for(int i=0;str3[i]!='\0';i++)
    {
        if(islower(str3[i])!=0)
            str3[i]=mp[str3[i]];
        else if(isupper(str3[i]))
        {
            str3[i]=toupper(mp[tolower(str3[i])]);
        }
    }
puts(str3);
return 0;
}
