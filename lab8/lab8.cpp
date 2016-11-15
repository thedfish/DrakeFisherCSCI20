// Written by Drake Fisher
// 11/14/16
// Program to convert kilograms to pounds or the other way around 

#include <iostream>
using namespace std;

// Conversion functions

double computePoundstoKilos(double pounds)
{
    return pounds * (1.0/2.2);
}

double computeKilostoPounds(double kilos)
{
    return kilos * 2.2;
}

main ()
{
    int userChoice = 0;
    double userPounds = 0;
    double userKilos = 0;
    
    // Asks user for type of calculation they would like to select.
    
    cout << "To select whether you want to convert pounds to kilograms or vice versa." << endl;
    cout << "Please enter the number of what you would like to calculate." << endl;
    cout << "Would you like to compute (1)Pounds to Kilograms or (2)Kilograms to Pounds?" << endl;
    
    cin >> userChoice;
    
    if (userChoice == 1)
    {
        cout << "Please enter the amount of Pounds you would like to convert to kilograms." << endl;
        cin >> userPounds;
        
        userKilos = computePoundstoKilos(userPounds);
        
        cout << userKilos;
    }
    
    else
    {
        cout << "Please enter the amount of kilograms you would like to convert to pounds." << endl;
        cin >> userKilos;
        
        userPounds = computeKilostoPounds(userKilos);
        
        cout << userPounds;
    }
    
    return (0);
}