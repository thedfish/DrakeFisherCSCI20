// Written by Drake Fisher
// 11/14/16
// Last edit: 11/14/16

#include<iostream>
using namespace std;

int main ()
{
    // PROBLEM 1
    int suzyAge = 25;
    int johnAge = 21;
    
    if(suzyAge < johnAge){
        cout << "Suzy is " << (suzyAge - johnAge) << " years younger than John" << endl;
    }
    else{
        cout << "John is " << (suzyAge - johnAge) << " years older than Suzy" << endl;    
    }
    
    // PROBLEM 2
    int x =7;
    int y = 7;
    
    if(x >= y){
        cout<< x << " is equal to or greater than " << y << endl;
    }
    
    else{
        cout<< x << " is not equal to or greater than " << y << endl;
    }
    
    // PROBLEM 3
    int a = 1;
    int b = 9;
    
    if(a == b){
        cout << a << " is equal to " << b << endl;
    }
    
    else{
        cout<< a << " is not equal to " << b << endl;
    }
    
    // PROBLEM 4
    int limit = 20;
    int count = 10;
    
    if((limit*count)/2 > 0){
        cout << "The product of " << limit << " and " << count << " divided by 2 is greater than 0" << endl;
    }
    else{
       cout << "The product of " << limit << " and " << count << " divided by 2 is not greater than 0" << endl; 
    }
    
    // PROBLEM 5
    int t = -4;
    int z = 0;
    
    if(t > 5 || z < 2){
        cout << t << " is greater than 5 OR " << z << " is less than 2" << endl;
    }
    else{
        cout << t << " isn't greater than 5 OR " << z << " isn't less than 2" << endl;
    }
    
    // PROBLEM 6
    int variable = -5;
    
    if(!(variable > 0)){
        cout << variable << " is greater than 0, '!' makes the equation false" << endl;
    }
    else{
        cout << variable << " isn't greater than 0, '!' makes the equation true" << endl;
    }
    
    // PROBLEM 7
    int ar = 16;
    
    if(ar/4 < 8 && ar >= 4){
        cout << ar << " divided by 4 is less than 8 AND " << ar << " is greater than or equal to 4" << endl;
    }
    else{
        cout << ar << " divided by 4 is greater than 8 OR " << ar << " is less than or equal to 4" << endl;
    }
    
    // PROBLEM 8
    int xr = -2;
    int yr = 5;
    
    if(xr*yr < 10 || yr*z < 10){
        cout << xr << " multiplied by " << yr << " is less than 10 OR " << yr << " multiplied by " << z << " is less than 10" << endl;
    }
    else{
        cout << xr << " multiplied by " << yr << " is greater than 10 OR " << yr << " multiplied by " << z << " is greater than 10" << endl;
    }
    
    // PROBLEM 9
    int j = -2;
    int k = 5;
    int l = 4;
    
    if(!(j*l < 10) || y/x * 4 < y *2){
        cout << j << " multiplied by " << l << " is less than 10 turned false by '!' OR ";
        cout << y << " divided by " << x << " times 4 is less than " << y << " times 2" << endl;
    }
    else{
        cout << j << " multiplied by " << l << " isn't less than 10 turned true by '!' OR ";
        cout << y << " divided by " << x << " times 4 is greater than " << y << " times 2" << endl;
    }


    
    
    
}

