#include<iostream>
using namespace std;
class Arthemtic
{
    private:
        int add,sub,div,mult;;
    public:
        int a,b;
        Arthemtic()
        {
            a=4;
            b=2;
        }
    friend void friendfunction(Arthemtic obj);
};
void friendfuntion(Arthemtic obj)
{
    add=a+b;
    sub=a-b;
    mult=a*b;
    div = a/b;
    cout<<"Addition of a and b:"<<add<<endl;
    cout<<"Subtraction of a and b:"<<sub<<endl;
    cout<<"Multiplication of a and b:"<<mult<<endl;
    cout<<"Division of a and b:"<<div<<endl;
}
int main()
{
   Arthemtic ob;
   friendfunction(ob);
   return 0;
}
