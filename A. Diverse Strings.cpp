/*Never Give up*/
/*
Problem  :https://codeforces.com/contest/1144/problem/A
Verdict     :AC
Time         :
Memory  :
*/
#include<bits/stdc++.h>
using namespace std;
#define sf(a)          scanf("%d",&a)
#define sff(a,b)         scanf("%d%d",&a,&b)
#define sfff(a,b,c)         scanf("%d%d%d",&a,&b,&c)
#define sffff(a,b,c,d)         scanf("%d%d%d%d",&a,&b,&c,&d)
#define sl(a)          scanf("%ld",&a)
#define sll(a,b)         scanf("%ld%ld",&a,&b)
#define slll(a,b,c)         scanf("%ld%ld%ld",&a,&b,&c)
#define sllll(a,b,c,d)         scanf("%ld%ld%ld%ld",&a,&b,&c,&d)
#define sc(a) scanf("%c",&a)
#define pf         printf
#define ll           long long
#define ull        unsigned long long
#define pb        push_back
#define v           vector
#define l            list
#define pi          pair
#define mp         map
#define nl         printf("\n")
#define en        pf("Entered\n")
//int dx[] = {-1, 0, 1, 0};
//int dy[] = {0, 1, 0, -1};

int main()
{
    int n;
    sf(n);
    while(n--)
    {
        string str;
        cin>>str;
        sort(str.begin(),str.end());
        if(str.size()==1)
            cout<<"Yes"<<endl;
        else
        {
            bool flag =false;
            for(int i=1; i<str.size(); i++)
            {

                if(str[i]-str[i-1]>1||str[i-1]==str[i])
                {
                    cout<<"No"<<endl;
                    flag=true;
                    break;
                }
            }
            if(flag==false)
                cout<<"Yes"<<endl;
        }
    }
    return 0;
}

