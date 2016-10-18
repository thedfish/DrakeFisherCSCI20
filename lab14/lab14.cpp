// This program reads in a letter and reports whether
// it is an uppercase letter, a lowercase letter, or neither.
#include <iostream>
using namespace std;
int main() {
    // Read a character in
    char ch;
    cout << "Please enter a character: ";
    cin >> ch;
    // check -- is it a letter??
    if (ch <= 'Z'){
        if (ch >= 'A'){
            cout << "Yes, that is a uppercase letter." << endl;
        }
        
    }
    else if (ch <= 'z'){
        if (ch >= 'a'){
            cout << "Yes, that is a lowercase letter." << endl;
        }
    }
    else {
        cout << "Not a letter" << endl;
    }
    return 0;
}