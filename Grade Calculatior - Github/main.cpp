//
//  main.cpp
//  Grade Calculatior - Github
//
//  Created by Subigya Parajuli on 1/29/25.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    
    
    int score;
    char grade;
        
        cout << "Please enter your score: ";
        cin >> score;
        
        if (score < 60) {
            grade = 'F';
        } else if (score >= 60 && score <= 69) {
            grade = 'D';
        } else if (score >= 70 && score <= 89) {
            grade = 'C';
        } else {
            grade = 'A';
        }
        
        switch (grade) {
            case 'F':
                cout << "Fail" << endl;
                break;
            case 'D':
                cout << "Pass" << endl;
                break;
            case 'C':
                cout << "Good" << endl;
                break;
            case 'A':
                cout << "Excellent" << endl;
                break;
        }
        
        return 0;
    }
    

    

