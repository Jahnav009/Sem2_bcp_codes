#include<iostream>
using namespace std;
class Add 
{
    public:
        int x;
        int y;
        Add()
        {
            x=5;
            y=6;
        }
        void display()
        {
            cout<<"Addition of x and y:"<<x+y<<endl;
        }
};
int main()
{
    Add sum1;
    sum1.display();
    Add sum2;
    sum2.display();
    return 0;
}