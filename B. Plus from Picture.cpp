/*Never Give up*/
/*
Problem  :https://codeforces.com/contest/1182/problem/B
Verdict     :
Time         :62 ms	500 KB
Memory  :
*/
#include<bits/stdc++.h>
using namespace std;
#define sf(a)          scanf("%d",&a)
#define sff(a,b)         scanf("%d%d",&a,&b)
#define sfff(a,b,c)         scanf("%d%d%d",&a,&b,&c)
#define sffff(a,b,c,d)         scanf("%d%d%d%d",&a,&b,&c,&d)
#define sl(a)          scanf("%lld",&a)
#define sll(a,b)         scanf("%lld%lld",&a,&b)
#define slll(a,b,c)         scanf("%lld%lld%lld",&a,&b,&c)
#define sllll(a,b,c,d)         scanf("%lld%lld%lld%lld",&a,&b,&c,&d)
#define sc(a) scanf("%c",&a)
#define sz(a)              a.size()
#define ff first
#define ss second
#define all(a)          a.begin(), a.end()
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pf         printf
#define pf1        pf("%d\n");
#define ll           long long
#define ull        unsigned long long
#define pb        push_back
#define vi           vector<int>
#define vl           vector<ll>
#define li            list<int>
#define pi          pair<int,int>
#define pl          pair<ll,ll>
#define mp         map
#define nl         printf("\n")
#define en        pf("Entered\n")
#define en1      pf("Entered 2\n")
#define gcd(a,b) __gcd(a,b)

// priority_queue<int, vector<int>, greater<int> > Q;//for smaller values

#define MAX    505

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
//int dx[]= {1,1,0,-1,-1,-1,0,1};/*8 side move*/
//int dy[]= {0,1,1,1,0,-1,-1,-1};/*8 side move*/
//int dx[]={1,1,2,2,-1,-1,-2,-2};/*knight move*/
//int dy[]={2,-2,1,-1,2,-2,1,-1};/*knight move*/

//'A'=65,'Z'=90 'a'=97 'z'=122 '0'=48
char str[MAX][MAX];
int ck,ck1,ck2,r,c;
int srcx=-1,srcy=-1;
bool visited[MAX][MAX];
void dfsVisit(int x,int y)
{
    visited[x][y]=true;
  ck2++;//cout<<"ck "<<x<<"  "<<y<<endl;
    for(int i=0; i<4; i++)
    {
        int xx=dx[i]+x;
        int yy=dy[i]+y;
        if(xx>=0&&xx<r&&yy>=0&&yy<c)
        {
         if(!visited[xx][yy]&&str[xx][yy]=='*'){dfsVisit(xx,yy);}
        }

    }

}

int main()
{
    sff(r,c);
    for(int i=0; i<r; i++)
        for(int j=0; j<c; j++)
        {
            cin>>str[i][j];
            if(str[i][j]=='*')ck1++;
            //  if(str[i][j]=='*'&&srcx=-1)srcx=i,srcy=j;

        }

    bool three=0;
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            if(str[i][j]=='*')
            {
              //  cout<<i<<" "<<j<<endl;
                int cc=0,c1[4]={0,0,0,0};
                for(int k=0; k<4; k++)
                {
                    int xx=dx[k]+i;
                    int yy=dy[k]+j;
                    //cout<<"x "<<xx<<"    y "<<yy<<endl;
                    if(xx>=0&&xx<r&&yy>=0&&yy<c&&str[xx][yy]=='*'){
                    c1[k]++;

                    cc++;
                    }

                }
                //cout<<"cc"<<cc<<endl;
//                cout<<c1<<"kk "<<c2<<endl;
                if(cc==4)ck++,srcx=i,srcy=j;
                else if(cc==3)
                {
                    pf("NO\n");
                    return 0;
                }
                else if((c1[0]&&c1[1])||(c1[0]&&c1[3])||(c1[2]&&c1[3])||(c1[1]&&c1[2]))
                {
                    pf("NO\n");
                    return 0;
                }

            }

            if(ck>1)
            {
                pf("NO\n");
                return 0;
            }

        }
    }
    if(ck==0||ck1<4)
    {
        pf("NO\n");
        return 0;
    }
//cout<<"s "<<srcx<<srcy<<endl;
    dfsVisit(srcx,srcy);
  //  cout<<ck1<<" "<<ck2<<endl;
    if(ck1==ck2)pf("YES\n");
    else pf("NO\n");


    return 0;
}
/*
Ref:
*/
