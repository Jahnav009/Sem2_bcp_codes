#include<iostream>
using namespace std;

int main()
{
    int num1,num2;

    cout<<"enter the first number:";
    cin>>num1;
    cout<<"enter the second number:";
    cin>>num2;

    int sum=num1+num2;
    int difference=num1-num2;
    int product=num1*num2;
    int quotient=num1/num2;
    int remainder=num1%num2;

    cout<<"sum:"<<sum<<endl;
    cout<<"difference:"<<difference<<endl;
    cout<<"product:"<<product<<endl;
    cout<<"quotient:"<<quotient<<endl;
    cout<<"remainder:"<<remainder<<endl;
    return 0;
}