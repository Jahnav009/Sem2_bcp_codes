#include<iostream>
using namespace std;
class Complex
{
    private:
        double real;
        double imaginary;
    public:
        Complex(int r,int i)
        {
            real=r;
            imaginary=i;
        }
    friend void add(Complex c1,Complex c2)
    void display()
    {
        cout<<"Real Number:"<<real<<endl;
        cout<<"Imaginary:"<<imaginary<<endl;
    }
};
void add(Complex c1,Complex c2)
{
    cout<<  
}