// Made by Drake Fisher
// 11/2/16
// Last edit: 11/14/16

#include <iostream>
using namespace std;

// Function to call the verse and replace the animal with whatever desired

void verse (string animal)
{
    cout << "Old MACDONALD had a farm," << endl;
    cout << "E-I-E-I-O." << endl;
    cout << "And on his farm he had a " << animal << "," << endl;
    cout << "E-I-E-I-O." << endl;
    
}

// Function to call the chrous and replace the noise with whatever desired

void chorus (string noise)
{
    cout << "With a " << noise << " " << noise << " here" << endl;
    cout << "and a " << noise << " " << noise << " there." << endl;
    cout << "Here a " << noise << ", there a " << noise << "," << endl;
    cout << "everywhere a " << noise << " " << noise << "." << endl;
    cout << "Old MacDonald had a farm," << endl;
    cout << "E-I-E-I-O" << endl;
    cout << endl;
}

// Calls all functions for animals

int main ()
{
    verse ("pig");
    chorus ("oink");
    verse ("cow");
    chorus ("moo");
    verse ("duck");
    chorus ("quack");
}