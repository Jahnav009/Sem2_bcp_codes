#include<iostream>
using namespace std;
class Time
{
private:
    int hours;
    int min;
public:
        void getTime(int h,int m)
        {
            hours = h;
            min = m;
        }
    void display()
    {
        cout<<"Hours : "<<hours<<endl;
        cout<<"Minutes : "<<min<<endl;
    }
    Time totaltime(Time t1,Time t2)
    {
        Time total;
        total.hours = t1.hours+t2.hours;
        total.min = t1.min+t2.min;

        return total;
    }
};
int main()
{
    Time time1,time2,total;
    time1.getTime(1,30);
    time2.getTime(3,45);

    cout<< "Time 1:";
    time1.display();

    cout<< "Time 2";
    time2.display();

    total = total.totaltime(time1,time2);

    cout<<"Total time:";
    total.display();

    return 0;
}