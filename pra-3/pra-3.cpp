#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float   km,cm,feet;
    cout<<"nter the distance in kilometer:";
    cin>>km;
    float cm=km*10000;
    float m=km*1000;
    float inch=km*39370.1;
    float feet=km*3280.84;
    cout<<setprecision(2)<<fixed;
    cout<<"DIstance in centimeter:"<<
    setw(10)<<setfill('*')<<m<<endl;
    cout<<"Distance in meter:"<<
    setw(14)<<setfill('*')<<inch<<endl;
    cout<<
}