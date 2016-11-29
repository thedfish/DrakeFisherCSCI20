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
    int menustock[9];
    
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
    

    cout << "Hey, are you tired of real doors cluttering up your house?, when you open them"<< endl;
    cout << "and they actually go somewhere? Well here at Fakedoors.com we sell fake doors "<< endl;
    cout << "where none actually open. Are you interested in buying some REAL fake doors? y/n" << endl;
    cin >> customeryes;
    if(customeryes == 'y'){
        cout << "~~~~~~~~~~MENU~~~~~~~~~~" << endl;
        cout << "#1: White Fake door" << endl;
        cout << "#2: Red Fake door" << endl; 
        cout << "#3: Blue Fake door" << endl; 
        cout << "#4: Green Fake door" << endl; 
        cout << "#5: Yellow Fake door" << endl; 
        cout << "#6: Purple Fake door" << endl; 
        cout << "#7: Large Fake door" << endl;
        cout << "#8: Small Fake door" << endl; 
        cout << "#9: Sliding Fake door" << endl; 
        cout << "#10: Double Fake doors" << endl;
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
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
            cout << "White Fake door added to order!" << endl;
        }
        else if(userInput == menuitems[1]){
            menustock[1] = menustock[1]+1;
            cout << "Red Fake door added to order!" << endl;
        }
        else if(userInput == menuitems[2]){
            menustock[2] = menustock[2]+1;
            cout << "Blue Fake door added to order!" << endl;
        }
        else if(userInput == menuitems[3]){
            menustock[3] = menustock[3]+1;
            cout << "Green Fake door added to order!" << endl;
        }
        else if(userInput == menuitems[4]){
            menustock[4] = menustock[4]+1;
            cout << "Yellow Fake door added to order!" << endl;
        }
        else if(userInput == menuitems[5]){
            menustock[5] = menustock[5]+1;
            cout << "Purple Fake door added to order!" << endl;
        }
        else if(userInput == menuitems[6]){
            menustock[6] = menustock[6]+1;
            cout << "Large Fake door added to order!" << endl;
        }
        else if(userInput == menuitems[7]){
            menustock[7] = menustock[7]+1;
            cout << "Small Fake door added to order!" << endl;
        }
        else if(userInput == menuitems[8]){
            menustock[8] = menustock[8]+1;
            cout << "Sliding Fake door added to order!" << endl;
        }
        else if(userInput == menuitems[9]){
            menustock[9] = menustock[9]+1;
            cout << "Double Fake doors added to order!" << endl;
        }
        else if(userInput == 11){
            cout << "~~~~~~~~~~MENU~~~~~~~~~~" << endl;
            cout << "#1: White Fake door" << endl;
            cout << "#2: Red Fake door" << endl; 
            cout << "#3: Blue Fake door" << endl; 
            cout << "#4: Green Fake door" << endl; 
            cout << "#5: Yellow Fake door" << endl; 
            cout << "#6: Purple Fake door" << endl; 
            cout << "#7: Large Fake door" << endl;
            cout << "#8: Small Fake door" << endl; 
            cout << "#9: Sliding Fake door" << endl; 
            cout << "#10: Double Fake doors" << endl;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        }
        else if(userInput == 12){
            cout << "Order: " << endl;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~" << endl;
            cout << "White Fake door: "<< menustock[0] << endl;
            cout << "Red Fake door: " << menustock[1] << endl; 
            cout << "Blue Fake door: " << menustock[2] << endl; 
            cout << "Green Fake door: " << menustock[3] << endl; 
            cout << "Yellow Fake door: " << menustock[4] << endl; 
            cout << "Purple Fake door: " << menustock[5] << endl; 
            cout << "Large Fake door: " << menustock[6] << endl;
            cout << "Small Fake door: " << menustock[7] << endl; 
            cout << "Sliding Fake door: " << menustock[8] << endl; 
            cout << "Double Fake doors: " << menustock[9] << endl;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~" << endl;
            cout << "Order is now processed, expect a delivery from REAL fake doors REAL soon" << endl;
            orderEnd = true;
        }
    }
    if(orderEnd = true){
        cout << "Thanks for coming here to REAL fake doors!" << endl;
    }
}