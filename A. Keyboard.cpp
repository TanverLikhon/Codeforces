#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<char,char>mpR;
    map<char,char>::iterator it;
    mpR['q']='w';
    mpR['w']='e';
    mpR['e']='r';
    mpR['r']='t';
    mpR['t']='y';
    mpR['y']='u';
    mpR['u']='i';
    mpR['i']='o';
    mpR['o']='p';
    mpR['p']='{';
    mpR['a']='s';
    mpR['s']='d';
    mpR['d']='f';
    mpR['f']='g';
    mpR['g']='h';
    mpR['h']='j';
    mpR['j']='k';
    mpR['k']='l';
    mpR['l']=';';
    //mpR[';']=;
    mpR['z']='x';
    mpR['x']='c';
    mpR['c']='v';
    mpR['v']='b';
    mpR['b']='n';
    mpR['n']='m';
    mpR['m']=',';
    mpR[',']='.';
    mpR['.']='/';


    char s [2];
    char str[101];
    gets(s);
    gets(str);
    int n=strlen(str);
    if(s[0]=='L')
    {
        for(int i=0; i<n; i++)
        {
            str[i]=mpR[str[i]];
        }
    }
    else if(s[0]=='R')
    {
        for(int i=0; i<n; i++)

            for(it=mpR.begin(); it!=mpR.end(); it++)
            {

                if(str[i]==it->second)
                {
                    str[i]=it->first;

                    break;
                }
            }
    }
puts(str);
    return 0;
}
