///code force
#include<iostream>
#include <sstream>

#include<string>

using namespace std;



int main()
{
    int n;
    string a;
    char out[4];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        int x=a.length();
      if(x>10)
      {
          	ostringstream str1;


	str1 << x-2;

	string geek = str1.str();
	geek=a[0]+geek+a[x-1];

          cout<<geek<<endl;

      }
      else
        cout<<a<<endl;

    }
    return 0;
}
