#include<iostream>
using namespace std;
int max(int num1,int num2)
{
    return(num1>num2)?num1:num2;
}
int max(int num1,int num2,int num3)
{
    int maxN=max(num1,num2);
    return(maxN>num3)?maxN:num3;
}
int main()
{
    int num1,num2,num3;
    cout<<"Enter First number:";
    cin>>num1;
    cout<<"Enter Second number:";
    cin>>num2;
    cout<<"Enter three number:";
    cin>>num3;
    int maxium=max(num1,num2,num3);
    cout<<"The maximum number is:"<<maxium<<endl;
    return 0;
}