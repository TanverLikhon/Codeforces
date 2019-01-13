#include<iostream>
using namespace std;
int main()
{
    string s;
    int ck=0;
    cin>>s;
    for(int i=0;s[i]!='\0';i++)
    {

        if(s[i]=='H'||s[i]=='Q'||s[i]=='9')
            ck=1;

    }

    if(ck==1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;

}
