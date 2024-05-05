#include <iostream>
#include <string>
using namespace std;

int max(int num1, int num2, int num3) {
    if (num1 >= num2 && num1 >= num3)
        return num1;
    else if (num2 >= num1 && num2 >= num3)
        return num2;
    else
        return num3;
}
    string max(string str1, string str2, string str3) {
    if (str1 >= str2 && str1 >= str3)
        return str1;
    else if (str2 >= str1 && str2 >= str3)
        return str2;
    else
        return str3;
}
int main() {
    int num1 = 10, num2 = 20, num3 = 30;
    string str1 = "apple", str2 = "banana", str3 = "cherry";
    cout << "Maximum number: " << max(num1, num2, num3) << endl;
    cout << "Maximum string: " << max(str1, str2, str3) << endl;
    return 0;
}