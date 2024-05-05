#include<iostream>
using namespace std;

inline int calculateSum()
{
    int sum=0;
    for (int i = 1; i <=10; i++)
    {
        sum +=i;
    }
    return sum;
}
int main()
{
    int result=calculateSum();
    cout<<"The sum of number from 1 to 10 is;"<<result<<endl;
    return 0;
}