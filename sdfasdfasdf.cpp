#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#include<cstdio>

using namespace std;


int main()
{
    long long int n;
     cin>>n;
    long long int arr[n];
     map<int, int>my;
     for(long long int i=0; i<n; i++){
        cin>>arr[i];
        my[arr[i]]=i;
     }
    cout<<my.size()<<endl;
    for(long long int i=0; i<n; i++){
        if(my[arr[i]]==i)
            cout<<arr[i]<<" ";
    }
    cout<<endl;

}
