// Written by Drake Fisher
// 9/6/2016

#include <iostream>
using namespace std;

int main() {
    int totalmoney;
    int quarters;
    int dimes;
    int nickels;
    int pennies;
    int remainingmoney;
    float dollarvalue;
    float tax;
    float receipt;
    
    
    cout <<"Please state the exact amount of cents"<<endl;
    cin >> totalmoney; 
    
    // Calculates how many of each coin type
     quarters = totalmoney / 25;
    
     remainingmoney = totalmoney % quarters;
    
     dimes = (remainingmoney % 25) / 10;
    
     nickels = ((remainingmoney % 25)% 10) /5;
     
     pennies = (((remainingmoney % 25)% 10)% 5) /1;
     
     dollarvalue = totalmoney / 100;

     tax = dollarvalue * 0.11;
     receipt = dollarvalue - tax;
   
   
   // Displays amount of coins
    cout <<"total money: "<<totalmoney<< endl;
    
    cout <<"quarters: "<<quarters<< endl;
    
    cout <<"dimes: "<<dimes<< endl;
    
    cout <<"nickels: "<<nickels<< endl;
    
    cout <<"pennies: "<<pennies<< endl;
    
    cout <<"-------------------------------" << endl;
    
    cout <<"Cash Voucher: "<<receipt<< endl;
    cout <<"tax taken: "<<tax<< endl;
    
}
    