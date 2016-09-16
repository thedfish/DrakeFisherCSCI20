// Written by Drake Fisher
// 9/13/2016
// Last edit: 9/13/2016

#include <iostream>
#include <string>

using namespace std;

int main() {
    string userfirstname;
    string userlastname;
    float userhourlypay;
    int userhoursweek;
    float usergrosspay;
    float usertax;
    float usernetpay;
    
    cout <<"Hello, I am a script that calculates your weekly netpay after tax"<<endl;
    cout <<"May I begin by asking you your first name?"<<endl;
    cin >> userfirstname;
    cout <<"----------------------------------------------------"<<endl;
    
    cout <<"Great! It is a pleasure to help you "<<userfirstname<<"."<<endl;
    cout <<"Next, may I get your last name?"<<endl;
    cin >> userlastname;
    cout <<"----------------------------------------------------"<<endl;
    
    cout <<"Can you please list your hourly pay?(Ex: 9.50)"<<endl;
    cin >> userhourlypay;
    cout <<"----------------------------------------------------"<<endl;
    
    cout <<"How many hours do you work a week "<<userfirstname<<"?"<<endl;
    cin >> userhoursweek;
    cout <<"----------------------------------------------------"<<endl;
    
    usergrosspay = userhourlypay * userhoursweek;
    
    usertax = usergrosspay * .17;
    
    usernetpay = usergrosspay - usertax;
    
    cout <<"Ok here is your card, Have a great rest of your day "<<userfirstname<<"!"<<endl;
    cout <<"----------------------------------------------------"<<endl;
    cout <<"Name: "<<userfirstname<<" "<<userlastname<<endl;
    cout <<"Hours worked: "<<userhoursweek<<endl;
    cout <<"Hourly wage: $"<<userhourlypay<<endl;
    cout <<"Gross pay(Before tax): $"<<usergrosspay<<endl;
    cout <<"Net pay(After tax): $"<<usernetpay<<endl;
    cout <<"Tax taken: $"<<usertax<<endl;
    cout <<"----------------------------------------------------"<<endl;
    
}
    
    
    

    
    