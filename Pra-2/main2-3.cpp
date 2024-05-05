#include<iostream>
using namespace std;

int main()
{
    int num,i,check=0;

    cout<<"enter a number:";
    cin>>num;

    for(i=1;i<=num; i++){
     if(num%i==0){
        check++;
     }
    }
    if(check==2){
        cout<<"the number is prime"<<endl;
    }
    else
    {
        cout<<"the number is not prime"<<endl;
    }
    return 0;
}