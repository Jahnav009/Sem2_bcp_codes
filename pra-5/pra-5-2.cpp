#include <iostream>
using namespace std;
class Employee 
{
public:
    int employee_number;
    string employee_name;
    float basic, DA, IT, net_salary;

    void printData() 
    {
        cout << "Employee Number: " << employee_number << endl;
        cout << "Employee Name: " << employee_name << endl;
        cout << "Basic Salary: " << basic << endl;
        cout << "Dearness Allowance: " << DA << endl;
        cout << "Income Tax: " << IT << endl;
        cout << "Net Salary: " << net_salary << endl;
    }
};
int main() 
{
    Employee emp;
    emp.employee_number = 1;
    emp.employee_name = "Jahnav Vyas";
    emp.basic = 100;
    emp.DA = 100;
    emp.IT = 100;
    {
    emp.net_salary = emp.basic + emp.DA - emp.IT;
    emp.printData();
    }
    return 0;
}