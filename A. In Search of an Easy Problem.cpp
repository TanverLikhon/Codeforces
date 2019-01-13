#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    bool flag=true;
    for(int i=0;i<n;i++)
    {
        int x;cin>>x;
        if(x==1)flag=false;
    }
    if(flag==false)cout<<"HARD"<<endl;
    else cout<<"EASY"<<endl;
    return 0;
}
