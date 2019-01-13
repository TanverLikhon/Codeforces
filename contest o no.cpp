
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;

    while(cin>>n&&n!=0)
    {
            vector<int>vec;
                 vector<int>vec1;
                      vector<int>::iterator it,it1;
        for(int i=0;i<n;i++)
        {

            vec.push_back(i+1);
        }

       int x=vec.size();
while(x>1)
        {
            vec1.push_back(vec.at(0));
            it=vec.begin();

            vec.erase(it);

            vec.push_back(vec.at(0));
               it1=vec.begin();
               vec.erase(it1);

            x=vec.size();
        }
        cout<<"Discarded cards: ";
        for(int i=0;i<vec1.size()-1;i++)
            cout<<vec1.at(i)<<",";
            cout<<vec1.at(vec1.size()-1)<<endl;
            cout<<"Remaining card: "<<vec.at(0)<<endl;

vec.clear();
vec1.clear();
    }
return 0;
}
