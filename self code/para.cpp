#include<iostream>
using namespace std;
class Add
{
    private:
        int x;
        int y;
    public:
    Add()
    {
        x=5;
        y=6;
    }
    Add(int x1,int y1)
    {
        x=x1;
        y=y1;
    }
    void display()
    {
        cout<<"x:"<<x<<"y:"<<y<<"\n";
        cout<<"Addition of two number:"<<x+y<<endl;
    }
};
int main()
{
    Add sum1;
    sum1.display();
    Add sum2(5,6);
    sum2.display();
    return 0;
}