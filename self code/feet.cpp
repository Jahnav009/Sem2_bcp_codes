#include<iostream>
using namespace std;
class Distance
{
    private:
        int feet;
        float inches;
    public:
    Distance()
    {
        feet=0;
        inches=0.0;
    }
    Distance(int ft,float in)
    {
        feet=ft;
        inches=in;
    }
    void display()
    {
        cout<<"feet:"<<feet<<"inches:"<<inches<<endl;
    }
};
int main()
{
    Distance a1;
    a1.display();
    Distance a2(5,6);
    a2.display();
    return 0;    
}
