#include <iostream>
using namespace std;
class Arithmetic 
{
private:
    int num1, num2;
public:
    Arithmetic(int n1, int n2)
    {
        num1=n1, num2=n2;
    }

    friend void calculate(Arithmetic calc);
};
void calculate(Arithmetic calc) 
{
    cout << "Addition: " << calc.num1 + calc.num2 << endl;
    cout << "Subtraction: " << calc.num1 - calc.num2 << endl;
    cout << "Multiplication: " << calc.num1 * calc.num2 << endl;
    cout <<  "Division: " << calc.num1/calc.num2 << endl;
}
int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    Arithmetic calc(a, b);
    calculate(calc);
    return 0;
}