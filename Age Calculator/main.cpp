//
//  main.cpp
//  Age Calulator
//
//  Created by Subigya Parajuli on 1/29/25.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
   
    int year;
    char age;
    
    cout << "Please enter your age " << endl;
    cin >> year;
    
    if (year < 12) {
        age = 'C';
    } else if (year >= 12 && year <= 19) {
        age = 'T';
    } else if (year >= 20 && year <= 64) {
        age = 'A';
    } else {
        age = 'S';
    }
    
    switch (age) {
        case 'C':
            cout << "Child" << endl;
            break;
        case 'T':
            cout << "Teen" << endl;
            break;
        case 'A':
            cout << "Adult" << endl;
            break;
        case 'S':
            cout << "Senior" << endl;
            break;
    }
    
    

    return 0;
}
