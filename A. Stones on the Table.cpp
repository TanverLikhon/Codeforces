#include<iostream>
using namespace std;
int ck;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;

    for(int i=0; i<n; i++)
        if(s[i]==s[i+1])
            ck++;

    cout<<ck<<endl;

    return 0;
}
