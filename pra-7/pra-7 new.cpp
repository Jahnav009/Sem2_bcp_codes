#include<iostream>
using namespace std;
class Result
{
    public:
    static int x;
    int y=0;
    static void print()
    {
        x=x+10;
        cout<<"Value of x="<<x<<endl;
    }
    void put()
    {
        y=y+10;
        cout<<"Value of y="<<y<<endl;
    }
};
int Result::x;
int main()
{
    Result r1,r2,r3;
    r1.print();
    r1.put();
    r2.print();
    r2.put();
    r3.print();
    r3.put();
    return 0;
}