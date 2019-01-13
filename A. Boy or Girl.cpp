#include<iostream>
using namespace std;
#include<string>

int ck;
int main()
{
   string a;
    cin>>a;
    int count[26]={0};

    for(int i=0;a[i]!='\0';i++)

    {
        if(a[i]>='a'&&a[i]<='z')count[a[i]-'a']++;
    }

for(int i=0;i<26;i++)
    if(count[i]!=0)ck++;

    if(ck%2==0)cout<<"CHAT WITH HER!"<<endl;
    else cout<<"IGNORE HIM!"<<endl;
    return 0;
}
