#include<iostream>
using namespace std;
class Distroyer
{
    public:
        Distroyer()
        {
            cout<<"Class is Created\n";
        }
        ~Distroyer()
        {
            cout<<"Class is distroyed\n";
        }
};
int main()
{
    Distroyer t1,t2,t3;
    return 0;
}