#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float km, cm, m, inch, feet;
    cout << "Enter the distance in kilometer:";
    cin >> km;
    cm = km * 10000;
    m = km * 1000;
    inch = km * 39370.1;
    feet = km * 3280.84;
    cout << setprecision(2) << fixed;
    cout << "Distance in centimeter:";
    cout << setw(10) << setfill('*') << cm << endl;
    cout << "Distance in meter:";
    cout << setw(14) << setfill('*') << m << endl;
    cout << "Distance in inch:";
    cout << setw(10) << setfill('*') << inch << endl;
    cout << "Distance in feet:";
    cout << setw(12) << setfill('*') << feet << endl;   
    return 0;
}