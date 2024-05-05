#include<iostream>
using namespace std;
class EMPLOYEE 
{
public:
    int EMPCODE;
    char EMPNAME[30];
    void getdata() 
    {
        cout << "Enter Employee Code: ";
        cin >> EMPCODE;
        cout << "Enter Employee Name: ";
        cin >> EMPNAME;
    }
    void display() 
    {
        cout << "Employee Code: " << EMPCODE << endl;
        cout << "Employee Name: " << EMPNAME << endl;
    }
};
int main() {
    const int numEmployees = 6;
    EMPLOYEE emp[numEmployees];
    for (int i = 0; i < numEmployees; i++) 
    {
        cout << "Enter details for Employee:" << i+1  << endl;
        emp[i].getdata();
    }
    cout << "\nEmployee Details:\n";
    for (int i = 0; i < numEmployees; i++) 
    {
        cout << "Employee " << i+1 << ":\n";
        emp[i].display();
        cout << endl;
    }
    return 0;
}