#include<iostream>
using namespace std;
int ck;
int main()
{
    int a,n,four=0,three=0,two=0,one=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        if(a==4){
           ck++;
           four++;
        }


        else if(a==3)
            three++;
        else if(a==2)
            two++;
        else if(a==1)
            one++;
    }

    if(three>one)
    {

        ck=ck+one;
   three=three-one;
        one=0;

    }
    else if(one>three)
    {
        ck=ck+three;
        one=one-three;
        three=0;
    }
    else if(three==one)
    {
        ck=ck+three;
        one=0;
        three=0;
    }

if(one>=2*two&&two!=0)
{
     one =one-2*two;
    ck=ck+two;
    two=0;

}
if(two>1)
{
    ck=ck+(two/2);
    two=two%2;

}

  if(two>one&&one!=0)
    {

        ck=ck+one;
 two=two-one;
        one=0;

    }
    else if(one>two&&two!=0)
    {
        ck=ck+one/2;
        one=one%2;
        two=0;
    }
    else if(two==one)
    {
        ck=ck+one/2;
         two=one/2;
        one=one%2;

    }

    if(one>=4)
    {
        ck=ck+one/4;
        one=one%4;
    }

 if(one>1)
    {
        ck=ck+one/2;
        one=one%2;
    }


    ck=ck+three+two+one;
    cout<<ck<<endl;



    return 0;

}
