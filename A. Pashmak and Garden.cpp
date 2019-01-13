#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ll long long
#define pb push_back

int main()
{
int x1,y1,x2,y2,x3,x4,y3,y4;
cin>>x1>>y1>>x2>>y2;
int len;
    if(x1==x2&&y1!=y2)
    {
    len=abs(y2-y1);
    x3=x1+len;
    x4=x1+len;
    y3=y1;
    y4=y2;
        cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4<<endl;

    }
    else if(y1==y2&&x1!=x2)
    {
    len=abs(x2-x1);
    y3=y1+len;
    y4=y1+len;
    x3=x1;
    x4=x2;
        cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4<<endl;

    }
  	else if(abs(x1-x2)==abs(y1-y2))
	{
x3=x1;y3=y2;x4=x2;y4=y1;
    cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4<<endl;

	}
  // cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4<<endl;
else pf("-1");
return 0;
}
