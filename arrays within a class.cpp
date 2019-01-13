#include <iostream>

using namespace std;

class ITEMS
{
    int itemcode[50];
    float itemprice[50];
    int count;
    public:
        void cnt(void)
        {
            count=0;
        }
        void getitem(void);
        void displaysum(void);
        void remove(void);
        void displayitems(void);
};
void ITEMS :: getitem(void)
{
    cout<<"enter item code:";
    cin>>itemcode[count];
    cout<<"enter item cost:";
    cin>>itemprice[count];
    count++;
}
void ITEMS :: displaysum(void)
{
    float sum=0;
    for(int i=0;i<count;i++)
        sum=sum+itemprice[i];
    cout<<"\ntotal value:"<<sum<<endl;
}
void ITEMS :: remove(void)
{
    int a;
    cout<<"enter item code:";
    cin>>a;
    for(int i=0;i<count;i++)
        if(itemcode[i]==a)
        itemprice[i] = 0;
}
void ITEMS :: displayitems(void)
{
    cout<<"\n code price\n";
    for(int i=0;i<count;i++){
        cout<<"\n"<<itemcode[i];
        cout<<" "<<itemprice[i];
        cout<<"\n";
        }
}

int main()
{
    ITEMS order;
    order.cnt();
    int x;
    do
    {
        cout<<"\n you can do the following;"
            <<"enter appropriate number \n";
        cout<<"\n1: add an item";
        cout<<"n2:display total value";
        cin>>x;
        switch(x)
        {
            case 1:order.getitem();break;
            case 2:order.displaysum();break;
            case 3:order.remove();break;
            case 4:order.displayitems();break;
            case 5:break;
            default:cout<<"error in input;try again\n";



        }


    }while(x!=5);
    return 0;
}
