#include<bits/stdc++.h>
using namespace std;
int arr[26];
int arr1[26];
int ck;
int  main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++)
    {
        if(isupper(s[i]))
        {
            int x=s[i]-65;
            arr[x]++;
        }
        else{

            int y=s[i]-97;
            arr1[y]++;
        }
    }
    for(int i=0;i<26;i++)
    {
        if(arr[i]>0||arr1[i]>0)ck++;
    }

    if(ck>=26)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;

}

