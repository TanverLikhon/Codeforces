
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    bool flag=false;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        string str;
        int before,after;
        cin>>str>>before>>after;
        if(before>=2400&&after>before)flag=true;
    }
    if(flag==true)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
