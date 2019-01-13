#include<bits/stdc++.h>
using namespace std;
int ck;
int main()
{
    int n,j=0,k=0;
    cin>>n;
    int color1[n],color2[n];
    for(int i=0;i<n;i++)
    {
        cin>>color1[j]>>color2[k];
        j++;k++;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            if(color1[i]==color2[j])ck++;
    }
    cout<<ck<<endl;
    return 0;
}
