#include<iostream>
using namespace std;
class Area
{
    public:
            double height;
            double base;
        Area()
        {
            height=6;
            base=5;
        }
    void display()
    {
        int a=base*height*1/2;
        cout<<"Area of Triangle:"<<a<<endl;
    }
};
int main()
{
    Area a1;
    a1.display();
    return 0;
}