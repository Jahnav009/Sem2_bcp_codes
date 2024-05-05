#include<iostream>
using namespace std;
int main()
{
    int numbers[10];
    int sum=0;

    cout<<"enter 10 numbers:";
    for(int i=0;i<10;i++){
        cin>>numbers[i];
        sum+=numbers[i];
    }
    double average=static_cast<double>(sum)/10;

    cout<<"sum:"<<sum<<::endl;
    cout<<"average:"<<average<<::endl;
    return 0;
}