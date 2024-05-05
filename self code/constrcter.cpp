#include<iostream>
using namespace std;
class Length
{
    public:
        int length;
        int bredth;
        Length()
        {
            length=5;
            bredth=7;
        }
        Length(int len,int bre)
        {
            length=len;
            bredth=bre;
        }
        Length(int leng)
        {
            length=leng;
        }
        void display()
        {
            cout<<"Length:"<<length<<"\nbredth:"<<bredth<<"\n"<<endl;
        }
};
int main()
{
    Length l1;
    l1.display();
    Length l2(l1);
    l2.display();
    Length l3=l2;
    l3.display();
    return 0;
}