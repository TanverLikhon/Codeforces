#include<bits/stdc++.h>
///accepted
using namespace std;
int findstr(string str)
{
    int ck;
    for(int i=0; str[i]!='\0'; i++)
    {
        if(str[i]=='0')
        {
            ck=1;
            break;
        }
        else
            ck=0;
    }
    return ck;
}
int maximum(string str,int n)
{
    int max=0,ck=0,i=0;
    while(str[i]!='\0')
    {
        if(str[i]=='1')
            ck++;
        else
        {
            if(ck>max)
                max=ck;
            ck=0;
        }
        i++;

    }//cout<<"M "<<max<<"CK"<<ck<<endl;
    if(ck>max)
        return ck;
    else
        return max;
    //return max;
}
int main()
{
    int n,d;
    cin>>n>>d;
    string str;
    for(int i=0; i<d; i++)
    {


        string x;
        cin>>x;
        //   cout<<findstr(x)<<endl;
        if(findstr(x)==1)
            str=str+"1";
        else
            str=str+"0";

    }


    cout<<maximum(str,n)<<endl;

    return 0;
}
