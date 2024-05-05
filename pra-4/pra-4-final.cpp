#include <iostream>
#include <string>
using namespace std;
template<typename T>
T max(T a, T b, T c) 
{
    return (a > b ? (a > c ? a : c) : (b > c ? b : c));
}
string max(string a, string b, string c) 
{
    return (a > b ? (a > c ? a : c) : (b > c ? b : c));
}
int main() 
{
    int maxNum = max(10, 20, 5);
    cout << "Maximum of three numbers: " << maxNum << endl;
    string maxStr = max("apple", "orange", "banana");
    cout << "Maximum of three strings: " << maxStr << endl;
    return 0;
}