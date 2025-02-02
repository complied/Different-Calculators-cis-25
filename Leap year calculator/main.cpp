//
//  main.cpp
//  Leap year calculator
//
//  Created by Subigya Parajuli on 1/29/25.
//

#include <iostream>
using namespace std;


int main(int argc, const char * argv[]) {
   
    int year;

      cout << "Enter a year: ";
      cin >> year;  

      if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
          cout << year << " is indeed a leap year!" << endl;
      } else {
          cout << year << " is not a leap year!" << endl;
      }

      return 0;
  }
