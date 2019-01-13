#include<bits/stdc++.h>
using namespace std;

///accepted
int main()
{
    int ck=0;
    int n;
    cin>>n;
    string str;
    cin>>str;

    if(n<=2)
    {
        cout<<0<<endl;
        return 0;
    }
    else
    {

        while(str.find("xxx") != string::npos)
        {
            int x;
            x=str.find("xxx");
            str.erase(x,1);
            ck++;
        }

    }
    cout<<ck<<endl;

    return 0;
}
