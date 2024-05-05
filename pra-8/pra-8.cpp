#include <iostream>
using namespace std;
class Distance 
{
    private:
        int feet;
        float inches;
    public:
        void input() 
        {
            cout << "Enter feet: ";
            cin >> feet;
            cout << "Enter inches: ";
            cin >> inches;
        }
        void output() 
        {
            cout << "Distance:\n" << feet << " feet " << endl;
            cout << inches << " inches "<< endl;
        }
        void add(Distance d1, Distance d2) 
        {
            feet = d1.feet + d2.feet;
            inches = d1.inches + d2.inches;
        }
};
int main() 
{
    Distance distance1, distance2, totalDistance;
    cout << "Enter the first distance: " << endl;
    distance1.input();
    cout << "Enter the second distance: " << endl;
    distance2.input();
    totalDistance.add(distance1, distance2);
    cout << "Total Distance after addition: " << endl;
    totalDistance.output();
    return 0;
}