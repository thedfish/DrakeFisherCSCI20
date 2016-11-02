// Written by Drake Fisher
// 9/8/2016
// Last edit: 11/2/2016

#include <iostream>
#include <string>
using namespace std;

struct Monster 
{
    string monsterName;
    string monsterHead;
    string monsterEyes;
    string monsterEars;
    string monsterNose;
    string monsterMouth;
};

int main()
{
    Monster myMonster;
    myMonster.monsterName;
    myMonster.monsterHead;
    myMonster.monsterEyes;
    myMonster.monsterEars;
    myMonster.monsterNose;
    myMonster.monsterMouth;
    
    cout << "What would you like to name your monster?" << endl;
    cin >> myMonster.monsterName;
    cout << myMonster.monsterName << "? Great! Now we can start piecing together your " << myMonster.monsterName << "." << endl;
    
    cout << "There are 6 different types of monster attributes to mix and match with." << endl;
    cout << "Your choices are:" << endl;
    cout << "Franken" << endl << "Happy" << endl << "Zombus" << endl << "Spritem" << endl << "Wackus" << endl << "Vegitas" << endl;
    
    cout << "What type of head would you like?" << endl;
    cin >> myMonster.monsterHead;
    cout << "Perfect! Now what kind of eyes would you like " << myMonster.monsterName << " to have?" << endl;
    cin >> myMonster.monsterEyes;
    cout << "What about " << myMonster.monsterName << "'s ears?" << endl;
    cin >> myMonster.monsterEars;
    cout << "What about your "<< myMonster.monsterName << "'s nose?" << endl;
    cin >> myMonster.monsterNose;
    cout << "Last piece! What about "<<myMonster.monsterName<< "'s mouth?" << endl;
    cin >> myMonster.monsterMouth;
    cout << "Amazing! " << myMonster.monsterName << " looks complete!" << endl;
    cout << "Your attributes: " << endl;
    cout << "Head: " << myMonster.monsterHead << endl << "Eyes: " << myMonster.monsterEyes << endl;
    cout << "Ears: " << myMonster.monsterEars << endl << "Nose: " << myMonster.monsterNose << endl << "Mouth: " << myMonster.monsterMouth << endl;
    cout << "Great! Well enjoy your new monster, come back if " << myMonster.monsterName << " would like a friend!" << endl;
}



//Name: OneMonster
//Head: Zombus
//Eyes: Spritem
//Ears: Vegitas
//Nose: None
//Mouth: Wackus
