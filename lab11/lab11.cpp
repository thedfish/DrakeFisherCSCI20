// Written by Drake Fisher
// 10/4/2016
// Last edit: 10/6/2016
// This program will calculate income tax and what is to be refunded to the user

#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string userFirstname;
    string userLastname;
    string fileStatus;
    bool taxOwe;
    float withheld   = 0.00;
    float grosswages = 0.00;
    float AGI        = 0.00;
    float taxValue   = 0.00;
    float taxdifferenceNeg = 0.00;
    float taxdifferencePos = 0.00;
    
    cout << "What is your first and last name?" << endl;
    cin >> userFirstname >> userLastname;
    
    cout << "Are you married? y/n" << endl;
    cin >> fileStatus;
    
    cout << "What is your total gross wages?" << endl;
    cin >> grosswages;
    
    cout << "How much tax has been withheld from your income?" << endl;
    cin >> withheld;
    
    if(fileStatus == "n" || fileStatus == "N"){
        AGI = grosswages - 3900.00 - 6100.00;
    }
    
    else if(fileStatus == "y" || fileStatus == "Y"){
        AGI = grosswages - 7800.00 - 12200.00;
    }
    
    if(AGI > 0){
        taxOwe = true;
    }
    
    else{
        taxOwe = false;
    }
    
    if(taxOwe = true){
        if(fileStatus == "n"){
            if(AGI < 8925.00){
                taxValue = AGI * .10;
            }
            else if(8926.00 < AGI < 36250.00){
                taxValue = ((AGI - 892.50) - 8925.00) * .15;
            }
            else if(36251.00 < AGI < 87850.00){
                taxValue = ((AGI - 4991.25) - 36250.00) * .25;
            }
            else if(AGI > 87851.00){
                taxValue = ((AGI - 4991.25) - 87850.00) * .28;
            }
        }    
        else{
            if(AGI < 17850.00){
                taxValue = AGI * .10;
            }
            else if(17851.00 < AGI < 72500.00){
                taxValue = ((AGI - 1785.00) - 17850.00) * .15;
            }
            else if(AGI > 72501.00){
                taxValue = ((AGI - 9982.50) - 72500.00) * .28;
            }
        }
    }
    else{
        taxValue = 0;
    }

    if(withheld < taxValue){
        taxdifferenceNeg = taxValue - withheld;
    }
    else if(withheld > taxValue){
        taxdifferencePos = withheld - taxValue;
    }
    
    cout << "---------------------------------" << endl;
    cout << userFirstname <<" "<< userLastname << endl;
    cout << "Gross Wages: "<< grosswages << endl;
    cout << "Tax Taken: "<< taxValue << endl;
    cout << "Tax Owed: "<< taxdifferenceNeg << endl;
    cout << "Refund Eligibility: " << taxdifferencePos << endl;

}
    
    
    

