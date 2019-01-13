
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,c=0,ck=0;
    cin>>n>>k;
    //getchar();
 string str;
 cin>>str;
    char pro[]= {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    //puts(pro);
    vector<char>vec;
  //  gets(str);

    vec.push_back(str[0]);
    for(int i=1; str[i]!='\0'; i++)
    {
        if(str[i-1]<=str[i]&&str[i]<=str[i+2])vec.push_back(str[i]);
       /* if(str[i-1]<str[i]&&str[i]>str[i+1]);
        else //if(str[i]>=str[i-1])
            vec.push_back(str[i]);*/
    }

    vector<char>:: iterator it;


     for(it=vec.begin(); it!=vec.end(); it++)
    {
 cout<<*it<<" ";
    }


    for(it=vec.begin(); it!=vec.end(); it++)
    {
        for(int i=0; i<k; i++)
        {
            if(*it==pro[i])
            {
                ck=1;
                break;
            }
            else
                ck=0;
                cout<<ck<<endl;
        }
        if(ck==1)
            {c++;ck=0;}
           if(c==k)break;
    }
  //  cout<<c<<endl;
    if(c==k)
    {
        cout<<vec.size()<<endl;
    }

}
