#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// Constants
const int MAX_EMPLOYEES = 100;

// Base class for personal information
class Person 
{
private:
    string name;
    int age;
    string gender;
    string bloodGroup;
    string dob;
    string address;
    string email;
    string mobile;
public:
    void inputPersonalInfo() 
    {
        // Use underscore(_) instead of white space
        cout << "Enter Name: "; 
        cin >> name;
        cout << "Enter Age: "; 
        cin >> age;
        cout << "Enter Gender: "; 
        cin >> gender;
        cout << "Enter Blood Group: "; 
        cin >> bloodGroup;
        cout << "Enter Date of Birth: "; 
        cin >> dob;
        cout << "Enter Address: "; 
        cin >> address;
        cout << "Enter Email: "; 
        cin >> email;
        cout << "Enter Mobile Number: "; 
        cin >> mobile;
    }

    void displayPersonalInfo() 
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Gender: " << gender << endl;
        cout << "Blood Group: " << bloodGroup << endl;
        cout << "Date of Birth: " << dob << endl;
        cout << "Address: " << address << endl;
        cout << "Email: " << email << endl;
        cout << "Mobile: " << mobile << endl;
    }
};

// Derived class for employee information
class Employee : public Person 
{
private:
    string department;
    int yearOfJoining;
    int yearsOfExperience;
    string post;
    int workingYear;
    double salary;
public:
    void inputEmployeeInfo() 
    {
        inputPersonalInfo();
        cout << "Enter Department: "; 
        cin >> department;
        cout << "Enter Year of Joining: "; 
        cin >> yearOfJoining;
        cout << "Enter Years of Experience: "; 
        cin >> yearsOfExperience;
        cout << "Enter Post: "; 
        cin >> post;
        cout << "Enter Working Year: "; 
        cin >> workingYear;
        cout << "Enter Salary: "; 
        cin >> salary;
    }

    void displayEmployeeInfo() 
    {
        displayPersonalInfo();
        cout << "Department: " << department << endl;
        cout << "Year of Joining: " << yearOfJoining << endl;
        cout << "Years of Experience: " << yearsOfExperience << endl;
        cout << "Post: " << post << endl;
        cout << "Working Year: " << workingYear << endl;
        cout << "Salary: " << salary << endl;
    }
};

// Function prototypes
void addEmployee(Employee employees[], int& numEmployees);
void displayEmployee(Employee employees[], int numEmployees);
void showMenu();

int main() 
{
    Employee employees[MAX_EMPLOYEES];
    int numEmployees = 0;
    int choice;

    while (true) 
    {
        showMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) 
        {
            addEmployee(employees, numEmployees);
        } 
        else if (choice == 2) 
        {
            displayEmployee(employees, numEmployees);
        } 
        else if (choice == 3) 
        {
            break;
        } 
        else 
        {
            cout << "Invalid choice. Try again.\n";
        }
    }

    return 0;
}

// Function to show the menu
void showMenu() 
{
    cout << "\n1. Add Employee\n2. Display Employee\n3. Exit\n";
}

// Function to add an employee
void addEmployee(Employee employees[], int& numEmployees) 
{
    if (numEmployees >= MAX_EMPLOYEES) 
    {
        cout << "Cannot add more employees. Limit reached.\n";
        return;
    }

    employees[numEmployees].inputEmployeeInfo();
    numEmployees++;
}

// Function to display an employee
void displayEmployee(Employee employees[], int numEmployees) 
{
    int formNumber;
    cout << "Enter Employee Form Number: ";
    cin >> formNumber;

    if (formNumber <= numEmployees && formNumber > 0) 
    {
        employees[formNumber - 1].displayEmployeeInfo();
    } 
    else 
    {
        cout << "Invalid Form Number.\n";
    }
}