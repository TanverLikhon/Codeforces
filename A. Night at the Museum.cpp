#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ll long long
#define pb push_back
///https://codeforces.com/contest/731/problem/A
int main()
{
int sum=0;
char str[101];
gets(str);
char ch='a';
for(int i=0;str[i]!='\0';i++)
{
    int x=abs(ch-str[i]);
    sum=sum+min(x,abs(26-x));
    ch=str[i];
}
pf("%d\n",sum);

return 0;
}

