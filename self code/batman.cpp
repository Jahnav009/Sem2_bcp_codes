#include<iostream>
using namespace std;
class Add
{
    private:
        int x;
        int y;
    public:
        Add(int x1,int y1)
        {
            x=x1;
            y=y1;
        }
        Add(Add& a)
        {
            x=a.x;
            y=a.y;
        }
        void display()
        {
            cout<<"x:"<<x<<"y:"<<y<<"\n";
            cout<<"Addition of two number:"<<x+y<<endl;
        }
};
int main()
{
    Add sum1(5,6);
    sum1.display();
    Add sum2(sum1);
    sum2.display();
    Add sum4=sum2;
    sum4.display();
    return 0;
}