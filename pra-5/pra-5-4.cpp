#include<iostream>
using namespace std;

class ClassItem
{
    public:
    int item_number;
    float item_cost;
    void putdata()
    {
        cout<<"Item Number:"<<item_number<<endl;
        cout<<"Item Cost:"<<item_cost<<endl;
    }
};
void getdata(ClassItem &item)
{
    cout<<"Enter the item number: ";
    cin>>item.item_number;
    cout<<"Enter the Item cost";
    cin>>item.item_cost; 
}
int main()
{
    ClassItem item;
    getdata(item);
    item.putdata();
     return 0;
}