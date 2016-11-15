// Written by Drake Fisher
// 9/20/2016

#include <iostream>
#include <fstream>
#include <cctype>
#include <string>
using namespace std;

int main() {
    
    ifstream inFS;
    string fileNum1;
    string fileNum2;
    char fileNum3;
    
    string answerKey[20] = {a,b,c,c,c,c,a,a,b,b,f,f,t,t,f,t,f,f,variable,random,condition}
    
    // while(!inFS.eof()
    //
    //
    //
    //
    
    inFS.open("studentanswers.txt");
    
    if (!inFS.is_open()) {
      cout << "Could not open file student answers document." << endl;
      return 1; 
    }
    
    cout << "Reading two answers." << endl;
    inFS >> fileNum1;
    inFS >> fileNum2;
    inFS >> fileNum3;
    cout << "Closing file studentanswers.txt." << endl;
    inFS.close(); // Done with file, so close it
    
    cout << fileNum1 << " " << fileNum2 << " " << fileNum3 << endl;
    
    
    
}