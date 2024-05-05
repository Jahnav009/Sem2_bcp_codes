#include<iostream>
using namespace std;
class Value
{
    public:
        int x;
        int y;
    void value()
    {
        cout<<"Enter the value of x and y:"<<endl;
        cin>>x>>y;
    }
    void display()
    {
        cout<<"Value of X:"<<x<<endl;
        cout<<"Value of Y:"<<y<<endl;
    }
};
class Add : public Value
{
    public:
        int add;
    void addition()
    {
        add=x+y;
        cout<<"Addition of x and y is:"<<add<<endl;
    }
};
class Mul
{
    public:
        int a;
        int b;
        int multi;
    void getvalue()
    {
        cout<<"Enter the value of a and b:"<<endl;
        cin>>a>>b;
    }
    void mul()
    {
        multi=a*b;
        cout<<"Multiplication of x and y is:"<<multi<<endl;
    }
};
class Total : public Add,public Mul
{
    public:
       int total;
    void final()
    {
        total=a*b/x+y;
    }
    void print()
    {
        cout<<"The Division of Addition and Multiplication is:"<<total<<endl;
    }
};
int main()
{
    Value v1;
    v1.value();
    v1.display();
    
    Add a1;
    a1.addition();

    Mul m1;
    m1.getvalue();
    m1.mul();

    Total t1;
    t1.final();
    t1.print();

    return 0;
}
