#include <iostream>
using namespace std;
class Incrementer
{
private:
    static int count;
public:
    static void incrementValue() 
    {
        count++;
    }
    static int getCount() 
    {
        return count;
    }
};
int Incrementer::count = 1;
int main() 
{
    for (int i = 0; i < 3; i++) 
    {
        Incrementer::incrementValue();
    }
    cout << "The value of the variable after incrementing three times is: " << Incrementer::getCount() <<endl;
    return 0;
}