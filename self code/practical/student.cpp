#include<iostream>
using namespace std;
class Person
{
    public:
        string name;
        int age;
        void getperson()
        {
            cout<<"Enter Name:"<<endl;
            cout>>name;
            cout<<"Enter Age:"<<endl;
            cout>>age;
        }

        void showperson()
        {
            cout<<"Name:"<<name<<endl;
            cout<<"Age:"<<age<<endl;
        }
};
 
class Student : public Person
{
    public:
        int mark1,mark2,mark3;
        float percentage;

        void getstudent()
        {
            cout<<
        }
}