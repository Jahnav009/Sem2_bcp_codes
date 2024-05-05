#include<iostream>
using namespace std;

 double calArea(double r,double PI=3.14)
 {
    return PI*r*r;
 }
 int main()
 {
    double radius;
    cout<<"Enter the radius of circle:";
    cin>>radius;
    double area=calArea(radius);
    cout<<"The area of circle is:"<<area<<endl;
    return 0;
 }