//
//  main.cpp
//  Simple Calculator
//
//  Created by Subigya Parajuli on 1/29/25.
//

#include <iostream>
#include <cstdlib>
using namespace std;
int main(int argc, const char * argv[]) {
    
    double x, y;
        char operation;
        double addition, subtraction, multiplication, division;

        cout << "Please enter what operation you want to use: +, - , * or /";
        cin >> operation;

        if (operation != '+' && operation != '-' && operation != '*' && operation != '/') {
            cout << "Invalid response! Please only enter +, - , * or / -, Restart the program and re-enter those! " << endl;
            exit(1); //this is to exit the code when the input is wrong
        }

        cout << " Please enter Number 1 :";
        while (!(cin >> x)){
            cout << "Please enter an actual number, restart the program and try again" << endl;
            exit(1); //this is to exit when there's wrong input
        }

        cout << "Please enter number 2 :";
        while (!(cin >> y)){
            cout << "Please enter an actual number, restart the program and try again" << endl;
            exit(1); //this is to exit when there's wrong input
        }

        switch (operation) {
            case '+': addition = (x+y);
                cout << "Since you chose addition, your output of the 2 numbers are " << addition << endl;
                break;
        }

        switch (operation) {
            case '-': subtraction = (x-y);
                cout << "Since you chose subtraction, your output of the 2 numbers are " << subtraction << endl;
                break;
        }

        switch (operation) {
            case '*': multiplication = (x*y);
                cout << "Since you chose multiplication, your output of the 2 numbers are " << multiplication << endl;
                break;
        }

        switch (operation) {
            case '/':
                if (y == 0) {
                    cout << "Division by zero is not allowed. Please restart with valid numbers." << endl;
                    exit(1);
                }
                else {
                    division = (x / y);
                    cout << "Since you chose division, your output of the 2 numbers are " << division << endl;
                }
                break; //did this a bit differently to avoid the 0 error where a user inputs 0 in division and mess up. 
        }

        return 0;
    }
