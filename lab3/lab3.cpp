// Written by Drake Fisher
// 9/6/2016

#include <iostream>
#include <string>
using namespace std;

int main() {
    string noun1;
    string adj1;
    string noun2;
    int num1;
    float num2;
    char dot = '.';
 
 
//Prompts the user for input   
    cout << "Give me a noun" << endl;
    cin >> noun1; 
    
    cout << "Give me an adjective" << endl;
    cin >> adj1;
    
    cout << "Give me a plural noun" << endl;
    cin >> noun2;
    
    cout << "Give me a number" << endl;
    cin >> num1;
    
    cout << "Give me a specific decimal value with only 2 decimals (ex:5.86)" << endl;
    cin >> num2;

//Line to seperate final mad libs from inputs
    cout << "--------------------------------" << endl;


//Outputs the final Mad Lib
    cout << "The "<<adj1<<" "<<noun1<<" killed "<<num1<<" "
    <<noun2<<" for $"<<num2<<dot << endl;
    
}