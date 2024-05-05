#include<iostream>
using namespace std;
class Add
{
    public:
        int x,y;
        void add()
        {
            cout<<"****For Addtion****"<<endl;
            cout<<"X:";
            cin>>x;
            cout<<"Y:";
            cin>>y;
        }
};

class Mul
{
    public:
        int a;
        int b;
        int c;
    void mul()
    {
        cout<<"****For Multiplication****"<<endl;
        cout<<"A:";
        cin>>a;
        cout<<"B:";
        cin>>b;
        cout<<"C:";
        cin>>c;
    }
};

class Sub
{
    public:
        int p,q;
    void sub()
    {
        cout<<"****For Subtraction****"<<endl;
        cout<<"P:";
        cin>>p;
        cout<<"Q:";
        cin>>q;
    }
};

class Div
{
    public:
        double m,n;
    void div()
    {
        cout<<"****For Division****"<<endl;
        cout<<"M:";
        cin>>m;
        cout<<"N:";
        cin>>n;
    }
};

class Total : public Add,public Mul,public Sub, public Div
{
    public:
    void Total_add()
    {
        cout<<"\nAddition:"<<x+y<<"\n"<<endl;
    }

    void Total_sub()
    {
        cout<<"\nSubtraction:"<<p-q<<"\n"<<endl;
    }

    void Total_mul()
    {
         cout<<"\nMultiplication:"<<a*b*c<<"\n"<<endl;
    }

    void Total_div()
    {
         cout<<"\nDivision:"<<m/n<<"\n"<<endl;
    }
};

int main()
{
    Total a1,m1,s1,d1;

    a1.add();

    m1.mul();

    s1.sub();

    d1.div();

    cout<<"****Total****"<<endl;
    a1.Total_add();

    m1.Total_mul();

    s1.Total_sub();

    d1.Total_div();
    return 0;
}