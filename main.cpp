//  Filename:       fiboSequence.cpp
//  Summary:        Taking inspiration from the Hailstone Sequence in zyBooks, 
//                  this program generates a series of numbers from the 
//                  Fibonacci sequence specified by the user.
//  Author:         rizal
//  Date:           21 March 2023
//  Special Notes:  Credits to Paul G for his video on C++ input validations
//                  https://www.youtube.com/watch?v=IH78rIp3Fas
#include <iostream>
using namespace std;

void getSize (int&);
    // gets user input on how many numbers to generate from the sequence
void doSequence (int[], int);
    // generates sequence
void printSequence (int[], int);
    // prints sequences

int main() {
    // declare variables
    int size;
    getSize (size);
    
    int seq [size] = {0, 1};
    
    // processing
    doSequence (seq, size);
    printSequence (seq, size);
    
    return 0;
}

void getSize (int& size) {
    char sizeType;
    bool valid;
    
    do {
        cout << "Enter how many numbers to generate from the sequence: ";
        cin >> size;
        
        if (cin.fail()) {
            cout << "Invalid input.\n";
            cin.clear();
            cin.ignore(80, '\n');
        }
        else {
            valid = true;
        }
        
    } while (valid == false);
    
    return;
}

void doSequence (int seq[], int size) {
    for (int i = 2; i < size; i++) {
        seq[i] = seq[i - 1] + seq[i - 2];
    }
    
    return;
}

void printSequence (int seq[], int size) {
    for (int i = 0; i < size; i++) {
        cout << seq[i] << " ";
    }
    
    return;
}


