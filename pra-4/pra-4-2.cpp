#include<iostream>
using namespace std;
inline int multiply(int num1,int num2)
{
    return num1*num2;
}
int main()
{
    int num1,num2;
    cout<<"Enter the first number:";
    cin>>num1;
    cout<<"Enter the Second number:";
    cin>>num2;

    int result=multiply(num1,num2);
    cout<<"The product of"<<num1<<"and"<<num2<<"is:"<<result<<endl;
    return 0;
}