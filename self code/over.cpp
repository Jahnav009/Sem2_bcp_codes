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
            bredth=6;
        }
        Length(int len,int bre)
        {
            length=len;
            bredth=bre;
        }
        Length(int l)
        {
            length=l;
        }
        void display()
        {
            cout<<"lenght:"<<length<<"bredth:"<<bredth<<endl;
        }
};
int main()
{
    Length l1;
    l1.display();
    Length l2(8,9);
    l2.display();
    Length l3(l1);
    l3.display();
    return 0;
}