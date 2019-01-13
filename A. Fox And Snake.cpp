#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    char str[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            if(i%2==0)str[i][j]='#';
        //   else  if((i%2!=0)&&(j==m-1))str[i][j]='#';
        else str[i][j]='.';
    }
    for(int i=1;i<n;i=i+4)
     str[i][m-1]='#';
        for(int i=3;i<n;i=i+4)
     str[i][0]='#';
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)cout<<str[i][j];
        cout<<endl;
    }

    return 0;
}
//(j%2!=0)&&
