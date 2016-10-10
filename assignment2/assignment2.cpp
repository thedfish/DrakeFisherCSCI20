/* Written by Drake Fisher
     10/5/2016
     Last edit: 10/5/2016
     This program will convert a unit of distance to another using the required 
     conversions: Miles to feet, Miles to inches, Miles to meters, Miles to yards,
     Meters to miles,Yards to feet, and Inches to meters.
*/

#include <iostream>
#include <string>

using namespace std;

// Class for converting distance
class distanceConversion
{
    public:

    // mutators for conversion

    void mileToFoot(int miles)
    {
        distance = miles * 5280;
    }
    
    void mileToInch(int miles)
    {
        distance = miles * 63360;
    }
    
    void mileToMeter(int miles)
    {
        distance = miles * 1609.344;
    }
    
    void mileToYard(int miles)
    {
        distance = miles * 1760;
    }
    
    void meterToMile(int meters)
    {
        distance = meters / 1609.344;
    }
    
    void yardToFoot(int yards)
    {
        distance = yards * 3;
    }
    
    void inchToMeter(int inches)
    {
        distance = inches *  0.0245;
    }
    
    
    // accessor returning converted distance
    double getDistance()
    {
        return distance;
    }
    
    // prints the new converted distance
    void printDistance()
    {
        cout <<  getDistance() << endl;
        cout << " " << endl;
    }
    
    // default constructor
    distanceConversion()
    {
        distance = 0;
    }
    
    // constructor printing a string of the units being converted
    distanceConversion(string firstDistance, string convertedDistance)
    {
        cout << "Here is " << firstDistance << " converted to " << convertedDistance << endl;

    }
    
    private:
    
    double distance;
};

// ------------------------------------MAIN------------------------------------

int main() 
{

    // prints out the line stating units; converts the unit; prints the final value 
    distanceConversion distance1("1 mile", "feet");
    distance1.mileToFoot(1);
    distance1.printDistance();
    
    distanceConversion distance2("1 mile", "inches");
    distance2.mileToInch(1);
    distance2.printDistance();
    
    distanceConversion distance3("1 mile", "meters");
    distance3.mileToMeter(1);
    distance3.printDistance();
    
    distanceConversion distance4("1 mile", "yards");
    distance4.mileToYard(1);
    distance4.printDistance();
    
    distanceConversion distance5("16 meters", "miles");
    distance5.meterToMile(16);
    distance5.printDistance();
    
    distanceConversion distance6("20 yards", "feet");
    distance6.yardToFoot(20);
    distance6.printDistance();
    
    distanceConversion distance7("100 inches", "meters");
    distance7.inchToMeter(100);
    distance7.printDistance();
    
    distanceConversion distance8("1 meter", "miles");
    distance8.meterToMile(1);
    distance8.printDistance();
}