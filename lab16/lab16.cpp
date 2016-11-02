// Written by Drake Fisher
// 9/25/2016

#include <iostream>
#include <string>
using namespace std;

int main(){
    
    int userInput = 0;
    bool orderEnd;
    char customeryes;
    
    int menuitems[9];
    float menuprice[9];
    int menustock[9];
    int storestock[9];
    float ordertotal = 0.00;
    
    menuitems[0] = 1;
    menuitems[1] = 2;
    menuitems[2] = 3;
    menuitems[3] = 4;
    menuitems[4] = 5;
    menuitems[5] = 6;
    menuitems[6] = 7;
    menuitems[7] = 8;
    menuitems[8] = 9;
    menuitems[9] = 10;
    
    menuprice[0] = 22.50;
    menuprice[1] = 22.50;
    menuprice[2] = 22.50;
    menuprice[3] = 22.50;
    menuprice[4] = 22.50;
    menuprice[5] = 22.50;
    menuprice[6] = 30.00;
    menuprice[7] = 15.00;
    menuprice[8] = 40.00;
    menuprice[9] = 40.00;
    
    menustock[0] = 0;
    menustock[1] = 0;
    menustock[2] = 0;
    menustock[3] = 0;
    menustock[4] = 0;
    menustock[5] = 0;
    menustock[6] = 0;
    menustock[7] = 0;
    menustock[8] = 0;
    menustock[9] = 0;
    
    storestock[0] = 100;
    storestock[1] = 100;
    storestock[2] = 100;
    storestock[3] = 100;
    storestock[4] = 100;
    storestock[5] = 100;
    storestock[6] = 100;
    storestock[7] = 100;
    storestock[8] = 100;
    storestock[9] = 100;
    

    cout << "Hey, are you tired of real doors cluttering up your house?, when you open them"<< endl;
    cout << "and they actually go somewhere? Well here at Fakedoors.com we sell fake doors "<< endl;
    cout << "where none actually open. Are you interested in buying some REAL fake doors? y/n" << endl;
    cin >> customeryes;
    if(customeryes == 'y'){
        cout << "~~~~~~~~~~MENU~~~~~~~~~~~~~~~~" << endl;
        cout << "#1: White Fake door $22.50" << endl;
        cout << "#2: Red Fake door $22.50" << endl; 
        cout << "#3: Blue Fake door $22.50" << endl; 
        cout << "#4: Green Fake door $22.50" << endl; 
        cout << "#5: Yellow Fake door $22.50" << endl; 
        cout << "#6: Purple Fake door $22.50" << endl; 
        cout << "#7: Large Fake door $30.00" << endl;
        cout << "#8: Small Fake door $15.00" << endl; 
        cout << "#9: Sliding Fake door $40.00" << endl; 
        cout << "#10: Double Fake doors $40.00" << endl;
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        orderEnd = false;
    }
    else if(customeryes != 'y'){
        orderEnd = true;
    }
    
    
    while(orderEnd == false){
        cout << "What would you like? To view menu again type '11'.Type '12' when finished" << endl;
        cin >> userInput;
        if(userInput == menuitems[0]){
            menustock[0] = menustock[0]+1;
            storestock[0] = storestock[0]-1;
            cout << "White Fake door added to order!" << endl;
            cout << "Remaining stock: " << storestock[0] << endl;
        }
        else if(userInput == menuitems[1]){
            menustock[1] = menustock[1]+1;
            storestock[1] = storestock[1]-1;
            cout << "Red Fake door added to order!" << endl;
            cout << "Remaining stock: " << storestock[1] << endl;
        }
        else if(userInput == menuitems[2]){
            menustock[2] = menustock[2]+1;
            storestock[2] = storestock[2]-1;
            cout << "Blue Fake door added to order!" << endl;
            cout << "Remaining stock: " << storestock[2] << endl;
        }
        else if(userInput == menuitems[3]){
            menustock[3] = menustock[3]+1;
            storestock[3] = storestock[3]-1;
            cout << "Green Fake door added to order!" << endl;
            cout << "Remaining stock: " << storestock[3] << endl;
        }
        else if(userInput == menuitems[4]){
            menustock[4] = menustock[4]+1;
            storestock[4] = storestock[4]-1;
            cout << "Yellow Fake door added to order!" << endl;
            cout << "Remaining stock: " << storestock[4] << endl;
        }
        else if(userInput == menuitems[5]){
            menustock[5] = menustock[5]+1;
            storestock[5] = storestock[5]-1;
            cout << "Purple Fake door added to order!" << endl;
            cout << "Remaining stock: " << storestock[5] << endl;
        }
        else if(userInput == menuitems[6]){
            menustock[6] = menustock[6]+1;
            storestock[6] = storestock[6]-1;
            cout << "Large Fake door added to order!" << endl;
            cout << "Remaining stock: " << storestock[6] << endl;
        }
        else if(userInput == menuitems[7]){
            menustock[7] = menustock[7]+1;
            storestock[7] = storestock[7]-1;
            cout << "Small Fake door added to order!" << endl;
            cout << "Remaining stock: " << storestock[7] << endl;
        }
        else if(userInput == menuitems[8]){
            menustock[8] = menustock[8]+1;
            storestock[8] = storestock[8]-1;
            cout << "Sliding Fake door added to order!" << endl;
            cout << "Remaining stock: " << storestock[8] << endl;
        }
        else if(userInput == menuitems[9]){
            menustock[9] = menustock[9]+1;
            storestock[9] = storestock[9]-1;
            cout << "Double Fake doors added to order!" << endl;
            cout << "Remaining stock: " << storestock[9] << endl;
        }
        else if(userInput == 11){
            cout << "~~~~~~~~~~MENU~~~~~~~~~~~~~~~~" << endl;
            cout << "#1: White Fake door $22.50" << endl;
            cout << "#2: Red Fake door $22.50" << endl; 
            cout << "#3: Blue Fake door $22.50" << endl; 
            cout << "#4: Green Fake door $22.50" << endl; 
            cout << "#5: Yellow Fake door $22.50" << endl; 
            cout << "#6: Purple Fake door $22.50" << endl; 
            cout << "#7: Large Fake door $30.00" << endl;
            cout << "#8: Small Fake door $15.00" << endl; 
            cout << "#9: Sliding Fake door $40.00" << endl; 
            cout << "#10: Double Fake doors $40.00" << endl;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        }
        else if(userInput == 12){
            
            ordertotal = (menuprice[0] * menustock[0]) + (menuprice[1] * menustock[1]) +
            (menuprice[2] * menustock[2]) + (menuprice[3] * menustock[3]) +
            (menuprice[4] * menustock[4]) + (menuprice[5] * menustock[5]) +
            (menuprice[6] * menustock[6]) + (menuprice[7] * menustock[7]) + 
            (menuprice[8] * menustock[8]) + (menuprice[9] * menustock[9]);
            
            cout << "Order: " << endl;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~" << endl;
            cout << "White Fake door: "<< menustock[0] << ", $"<< menuprice[0] * menustock[0] << endl;
            cout << "Red Fake door: " << menustock[1] << ", $"<< menuprice[1] * menustock[1] << endl;
            cout << "Blue Fake door: " << menustock[2] << ", $"<< menuprice[2] * menustock[2] << endl;
            cout << "Green Fake door: " << menustock[3] << ", $"<< menuprice[3] * menustock[3] << endl; 
            cout << "Yellow Fake door: " << menustock[4] << ", $"<< menuprice[4] * menustock[4] << endl; 
            cout << "Purple Fake door: " << menustock[5] << ", $"<< menuprice[5] * menustock[5] << endl; 
            cout << "Large Fake door: " << menustock[6] << ", $"<< menuprice[6] * menustock[6] << endl;
            cout << "Small Fake door: " << menustock[7] << ", $"<< menuprice[7] * menustock[7] << endl; 
            cout << "Sliding Fake door: " << menustock[8] << ", $"<< menuprice[8] * menustock[8] << endl; 
            cout << "Double Fake doors: " << menustock[9] << ", $"<< menuprice[9] * menustock[9] << endl;
            cout << "ORDER TOTAL: $" << ordertotal << endl;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~" << endl;
            cout << "Order is now processed, expect a delivery from REAL fake doors REAL soon" << endl;
            orderEnd = true;
        }
    }
    if(orderEnd = true){
        cout << "Thanks for coming here to REAL fake doors!" << endl;
    }
}