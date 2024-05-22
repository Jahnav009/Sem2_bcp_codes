#include<iostream>
using namespace std;
class Distance
{
    	private:
        float centi;
        public:
        void setcenti(float cm)
        {
            centi=cm;
        }
        float converttoinch()
        {
            return centi/2.54;
        }
        float converttofeet()
        {
            return centi/30.48;
        }
        float converttometer()
        {
            return centi/100;
        }
        float converttokilo()
        {
            return centi/100000;
        }
};
int main()
{
    Distance d1;
    float cm;
    cout<<"Enter the distance in centimeter";
    cin>>cm;
    cout<<"Distance in inches"<<d1.converttoinch()<<endl;
    cout<<"Distance in feet"<<d1.converttofeet()<<endl;
    cout<<"Distance in meter"<<d1.converttometer()<<endl;
    cout<<"Distance in kilometer"<<d1.converttokilo()<<endl;
    return 0;
}