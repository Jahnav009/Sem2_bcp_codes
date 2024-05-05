#include <iostream>
using namespace std;
class CollegeInfo {
public:
    string college_name;
    int college_code;
    string dept;
    int intake;
    void display() 
    {
        cout << "College Name: " << college_name << endl;
        cout << "College Code: " << college_code << endl;
        cout << "Department: " << dept << endl;
        cout << "Intake: " << intake << endl;
    }
};
int main() 
{
    CollegeInfo college;
    college.college_name = "RCTI";
    college.college_code = 640;
    college.dept = "Computer Engineering";
    college.intake = 240;
    college.display();
    return 0;
}