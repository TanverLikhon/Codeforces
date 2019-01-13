#include<bits/stdc++.h>
using namespace std;
//sfb
long long bigmod(long long b,long long p,long long m)
{
	if(p==0) return 1;
	if(p%2==0)
	{
		long long rem=bigmod(b,p/2,m);
		return ((rem%m)*(rem%m))%m;
	}
	else return ((b%m)*(bigmod(b,p-1,m)%m))%m;

}
int main()
{
 long long b,p,m;

while(scanf("%lld %lld %lld",&b,&p,&m)!=EOF){
    printf("%lld\n",bigmod(b,p,m));

}
return  0;
}

