#include<iostream>
using namespace std;

class Person
{
    private:
    string name;
    int age;

    public:
    void getperson()
    {
        cout<<"Enter Name: ";
        cin>>name;
        cout<<"Enter Age: ";
        cin>>age;
    }

    void showperson()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};

class Student:public Person
{
    private:
    int marks1, marks2, marks3;
    float percentage;

    public:
    void getstudent()
    {
        cout<<"Enter Marks1(100): ";
        cin>>marks1;
        cout<<"Enter Marks2(100): ";
        cin>>marks2;
        cout<<"Enter Marks3(100): ";
        cin>>marks3;
    }

    void calculatePercentage()
    {
        percentage = (marks1+marks2+marks3)/3;
    }

    void showstudent()
    {
        cout<<"Percentage: "<<percentage<<"%"<<endl;
    }
};

class Teacher : public Student
{
    private:
    int salary;

    public:
    void getteacher()
    {
        cout<<"Enter Salary: ";
        cin>>salary;
    }
    void showteacher()
    {
        cout<<"Salary: "<<salary<<"$"<<endl;
    }
};

int main()
{
    Teacher t;
    t.getperson();
    t.getstudent();
    t.calculatePercentage();
    t.getteacher();
    t.showperson();
    t.showstudent();
    t.showteacher();

    return 0;
}