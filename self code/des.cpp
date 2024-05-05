#include<iostream>
using namespace std;
class Destroy
{
    public:
        Destroy()
        {
            cout<<"CLass start\n";
        }
        ~Destroy()
        {
            cout<<"class end with destrutor\n";
        }
};
int main()
{
    Destroy d1,d2,d3;
    return 0;
}