#include<iostream>
using namespace std;
class Add
{
    private:
            int x;
            int y;
    public:
            Add(int x1, int y1)
            {
                x=x1;
                y=y1;            
            }       
            Add(Add& p)
            {
                x=p.x;
                y=p.y;
            }
            void display()
            {
                cout<<"Two number are:\n"<<"x:"<<x<<"\ny:"<<y<<endl;
                cout<<"Addition of two number:"<<x+y<<endl;
            }
};
int main()
{
    Add a1(3,4);
    a1.display();
    Add a2(a1);
    a2.display();
    Add a3=a2;
    a3.display();
    return 0;
}