
#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926
int main()
{
    int T;
cin>>T;
    for(int i=0;i<T;i++)
    {
        double area,angle,l,rad;
        cin>>l>>angle;

      rad=(angle*pi)/180;

      area=((angle*pi*l*l)/360)-(0.5*l*l*sin(rad));
     printf("%.6lf\n",area);
    }
    return 0;
}
