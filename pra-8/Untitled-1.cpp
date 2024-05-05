#include <iostream>
using namespace std;

class Time 
{
private:
    int hours;
    int minutes;

public:
    void setTime(int h, int m) {
        hours = h;
        minutes = m;
    }

    void displayTime() 
    {
        cout<<"Hours : "<< hours <<endl;
        cout<<"Minutes : " << minutes <<endl;
    }

    Time totalTime(Time t1, Time t2) {
        Time total;
        total.hours = t1.hours + t2.hours;
        total.minutes = t1.minutes + t2.minutes;

        return total;
    }
};

int main() {
    Time time1, time2, total;

    time1.setTime(1, 30);
    time2.setTime(3, 15);

    cout << "Time 1: \n";
    time1.displayTime();

    cout << "Time 2: \n";
    time2.displayTime();

    total = total.totalTime(time1, time2);

    cout << "Total Time: \n";
    total.displayTime();

    return 0;
}