#include<iostream>
using namespace std;
class Value
{
    public:
        int x;
        int y;
    void getvalue()
    {
        cout<<"Enter value of x And y:"<<endl;
        cin>>x>>y;
    }
};
class Mul : public Value
{
    public:
        void mul()
        {
            cout<<"Multiplication of x and y:"<<x*y<<endl;
        }
};
class Add : public Value
{
    public:
        void add()
        {
            cout<<"Addition of x and y:"<<x+y<<endl;
        }
};
int main()
{
    Mul m1;
    m1.getvalue();
    m1.mul();
    Add a1;
    a1.getvalue();
    a1.add();
    return 0;
}