#include<iostream>
using namespace std;
class Complex
{
    private:
    double  real,imaginary;
    public:
    Complex(double r=0,double i=0)
    {
        real=r;
        imaginary=i;
    }
    friend void add(Complex  c1 ,Complex c2);
    void display()
    {
        cout<<"Real part:"<< real<<endl;
        cout<<"Imaginary part : " << imaginary << endl;
    }
}; 
void add(Complex  c1 ,Complex c2)
{   
   Complex temp(c1.real+c2.real,c1.imaginary+c2.imaginary);
   cout<<"The sum is : " <<temp.real<<"+i"<<temp.imaginary<<endl;
}
int main()
{
    double real1, real2, imag1, imag2;
    cout << "Enter the first real number: ";
    cin >> real1;
    cout<<"Enter the first imaginary number: ";
    cin>>imag1;
    cout << "Enter the second real number: ";
    cin >> real2;
    cout<<"Enter the second imaginary number: ";
    cin>>imag2;

    Complex  c1(real1,imag1);
    Complex  c2(real2,imag2);

    cout<<"Displaying the objects \n";
    c1.display();
    c2.display();
    add(c1,c2);
    return 0;
}