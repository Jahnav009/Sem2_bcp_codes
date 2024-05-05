#include<iostream>
using namespace std;
class Add
{
    protected:
        int x;
        int y;
    public:
        int add;
        void getvalue()
        {
            cout<<"Enter the value of x:"<<endl;
            cin>>x;
            cout<<"Enter the value of y:"<<endl;
            cin>>y;
        }
        void addition()
        {
            add=x+y;
            cout<<"Additon of x and y is:"<<add<<endl;
        }
};
class multiply : public Add
{
    protected:
        int mul;
    public:
        void multi()
        {
            mul=x*y;
            cout<<"Multiplication of x and y:"<<mul<<endl;
        }
};
int main()
{
    Add a1;
    a1.getvalue();
    a1.addition();
    multiply m1;
    m1.getvalue();
    m1.multi();
    return 0;
}
