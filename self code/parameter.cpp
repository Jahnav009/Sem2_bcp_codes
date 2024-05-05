#include<iostream>
using namespace std;
class Add
{
    private:
        int a;
        int b;
    public:
    Add()
    {
        a=3;
        b=6;
    }
    Add(int x,int y)
    {
        a=x;
        b=y;
    }
    void display()
    {
        cout<<"Addition of two number is:"<<a+b<<endl;
    }
};
int main()
{
    Add a1;
    a1.display();
    Add a2(5,6);
    a2.display();
    return 0;
}