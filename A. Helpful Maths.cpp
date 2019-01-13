#include<iostream>
#include<string>
using namespace std;
void bubble_sort(string s1,int n)
{
    int temp,j;
    for(int i=1; i<n; i=i+2)
    {
        for(j=0;j<n-i;j=j+2)
        {
            if(s1[j]>s1[j+2])swap(s1[j],s1[j+2]);
        }
    }
    cout<<s1<<endl;
}
int main()
{
    string str;
    cin>>str;
  int n= str.length();
  bubble_sort(str,n);

    return 0;
}
