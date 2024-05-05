#include<iostream>
using namespace std;
class Add
{
    public:
        int x=5,y=6;
        void add()
        {
            cout<<"X:"<<x<<endl;
            cout<<"Y:"<<y<<endl;
        }
};

class Mul
{
    public:
        int a=5;
        int b=5;
        int c=5;
    void mul()
    {
        cout<<"A:"<<a<<endl;
        cout<<"B"<<b<<endl;
        cout<<"C:"<<c<<endl;
    }
};

class Sub
{
    public:
        int p=15,q=10;
    void sub()
    {
        cout<<"p:"<<p<<endl;
        cout<<"q"<<q<<endl;
    }
};

class Div
{
    public:
        int m=4,n=2;
    void div()
    {
        cout<<"M:"<<m<<endl;
        cout<<"N:"<<n<<endl;
    }
};

class Total : public Add,public Mul,public Sub,public Div
{
    public:
    void Total_add()
    {
        cout<<"\nAddition:"<<x+y<<endl;
    }

    void Total_sub()
    {
        cout<<"\nSubtraction:"<<p-q<<endl;
    }

    void Total_mul()
    {
         cout<<"\nMultiplication:"<<a*b*c<<endl;
    }

    void Total_div()
    {
         cout<<"\nDivision:"<<m/n<<endl;
    }
};

int main()
{
    Add a1;
    a1.add();

    Total t1;
    t1.Total_add();

    Sub s1;
    s1.sub();
    
    Total t2;
    t2.Total_sub();

    Mul m1;
    m1.mul();

    Total t3;
    t3.Total_mul();

    Div d1;
    d1.div();

    Total t4;
    t4.Total_div();

    return 0;
}