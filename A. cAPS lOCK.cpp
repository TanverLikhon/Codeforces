///accepted
#include<iostream>
#include<cctype>

using namespace std;
int main()
{
    string a;
    cin>>a;
    int y,x=0;
    if(islower(a[0])&&a.length()==1)
    {

        a[0]=toupper(a[0]);
        cout<<a[0]<<endl;
    }

          else  if(isupper(a[0])&&a.length()==1)
    {

        a[0]=tolower(a[0]);
        cout<<a[0]<<endl;
    }

    else{

    if(islower(a[0]))
    {



        for(int i=1; a[i]!='\0'; i++)
        {
            if(islower(a[i]))
            {
                x=0;
                break;
            }
            else
                x=1;
        }



    }
    else
    {
        for(int i=1; a[i]!='\0'; i++)
            if(islower(a[i]))
            {
                x=0;
                break;
            }
            else
                x=2;

    }

    if(x==0)
        cout<<a<<endl;
    else if(x==1)
    {
        a[0]=toupper(a[0]);
        for(int i=1; a[i]!='\0'; i++)
            a[i]=tolower(a[i]);
        cout<<a<<endl;
    }
    else if(x==2)
    {
        for(int i=0; a[i]!='\0'; i++)
            a[i]=tolower(a[i]);
        cout<<a<<endl;
    }
    }
    return 0;
}
