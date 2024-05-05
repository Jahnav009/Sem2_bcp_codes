#include<iostream>
using namespace std;
class Distance
{
    int feet,inch;
    public:
    Distance()
    {
        feet=0;
        inch=0;
    }
    Distance(int f,int i)
    {
        feet=f;
        inch=i;
    }
    void display()
    {
        cout<<"distance:"<<feet<<"feet:"<<inch<<"inch"<<endl;
    }
};
int main()
{
    Distance d1;
    d1.display();
    Distance d2(12,11);
    d2.display();
    return 0;
}