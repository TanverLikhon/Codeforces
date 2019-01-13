
#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int >l;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        l.push_back(x);
    }
    l.sort();
 while(l.size()>1)
    {
      l.pop_back();
   if(l.size()<=1)break;
l.pop_front();

    }
    cout<<l.front()<<endl;
    return 0;
}
