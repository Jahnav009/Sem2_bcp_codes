#include<iostream>
using namespace std;
class basic_info
{
    public:
        char emp_name;
        int emp_id;
        int gender;
        void getdata()
        {
            cout<<"Enter Name:"<<endl;
            cin>>emp_name;
            cout<<"Enter Id:"<<endl;
            cin>>emp_id;
            cout<<"Enter Gender:"<<endl;
            cin>>gender;
        }
};
class dept_info
{
    public:
        int dept_name;
        int assign_work;
        int time2complete;

        void getvalue_dept()
        {
            cout<<"Enter Department Name:"<<endl;
            cin>>dept_name;
            cout<<"Enter Work:"<<endl;
            cin>>assign_work;
            cout<<"Time to complete the work(min):"<<endl;
            cin>>time2complete;
        }
};
class Emp: public basic_info,public dept_info
{
    public:
        void showdata()
        {
            cout<<"Name:"<<emp_name<<endl;
            cout<<"Department Name:"<<dept_name<<endl;
            cout<<"Id:"<<emp_id<<endl;
            cout<<"Gender:"<<gender<<endl;
            cout<<"Work assign:"<<assign_work<<endl;
            cout<<"Assign will be completed in:"<<time2complete<<"Minutes"<<endl;

        }
};
int main()
{
    Emp e1;
    e1.getdata();
    e1.getvalue_dept();
    e1.showdata();
    return 0;
}