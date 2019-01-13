#include<iostream>
using namespace std;
int maxval(int x1,int x2,int x3,int x4,int x5,int x6)
{
    if(x1>=x2&&x1>=x3&&x1>=x4&&x1>=x5&&x1>=x6)return x1;
    else if(x1<=x2&&x2>=x3&&x2>=x4&&x2>=x5&&x2>=x6)return x2;
    else if(x3>=x2&&x1<=x3&&x3>=x4&&x3>=x5&&x3>=x6)return x3;
    else if(x4>=x2&&x4>=x3&&x1<=x4&&x4>=x5&&x4>=x6)return x4;
    else if(x5>=x2&&x5>=x3&&x5>=x4&&x1<=x5&&x5>=x6)return x5;
      else if(x6>=x2&&x6>=x3&&x6>=x4&&x6>=x5&&x5<=x6)return x6;

}
int main()
{

    int a,b,c;
    cin>>a>>b>>c;
    int x1,x2,x3,x4,x5,x6,x7;

    x1=(a+b)*c;
    x2=a*(b+c);
    x3=a+b*c;
    x4=a*b*c;
    x5=(a+b+c);
    x6=a*b+c;

cout<<maxval(x1,x2,x3,x4,x5,x6)<<endl;

    return 0;
}
