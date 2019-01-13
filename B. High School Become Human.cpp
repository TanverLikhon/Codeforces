#include<bits/stdc++.h>
///accepted
using namespace std;
int main()
{
    double x,y;
    cin>>x>>y;
    if(x>2.7183&&y>2.7183)
    {
        if(x==1&&y>1)
            cout<<"<"<<endl;
        else if(x>1&&y==1)
            cout<<">"<<endl;
        else if(x>y)
            cout<<"<"<<endl;
        else if(x<y)
            cout<<">"<<endl;
        else
            cout<<"="<<endl;
    }
    else
    {
        double m,n;
        m=log(x)/x;
        n=log(y)/y;

        if(m>n)
            cout<<">"<<endl;
        else if(m<n)
            cout<<"<"<<endl;
        else
            cout<<"="<<endl;
    }

    return 0;
}
