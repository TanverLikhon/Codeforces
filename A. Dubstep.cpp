#include<bits/stdc++.h>
using namespace std;

///accepted wow
int main()
{
    string str;
    cin>>str;
    /*  str=str.erase(0,3);
    str=str.erase(str.size()-3,3);*/
    while(str.find("WUB")!=-1)
    {
        int x=str.find("WUB");
        if(x<1)
            str.erase(x,3);
        else
        {
            str.insert(x," ");
            str=str.erase(x+1,3);
            int y=str.find(" WUB");
            if(y>0)
                str=str.erase(x+1,3);
            x=str.find("WUB");

        }
    }

    cout<<str<<endl;
    return 0;
}
