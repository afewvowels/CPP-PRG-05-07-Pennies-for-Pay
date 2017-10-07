//
//  main.cpp
//  PRG-5-7-Pennies-for-Pay
//
//  Created by Keith Smith on 10/7/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//
//
//   Write a program that calculates how much a person would earn over a period of time
//   if his or her salary is one penny the first day and two pennies the second day, and
//   continues to double each day. The program should ask the user for the number of days.
//   Display a table showing how much the salary was for each day, and then show the
//   total pay at the end of the period. The output should be displayed in a dollar amount,
//   no the number of pennies.
//
//   Input Validation: Do not accept a number less than 1 for the number of days worked.

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int intPayPennies = 1,
        intPayDays;
    
    float fltPayTotal = 0.01;
    
    cout << setprecision(2) << fixed << showpoint;
    
    cout << "Please enter the number of days you would like to work for:\n";
    cin >> intPayDays;
    
    while(!cin || intPayDays <= 1 || intPayDays > 30)
    {
        cout << "Please enter a valid number of days you would like to work for(0-30):\n";
        cin.clear();
        cin.ignore();
        cin >> intPayDays;
    }
    
    cout << "Days Worked" << "\t\t" << "Money Earned" << endl;
    cout << "1" << "\t\t\t\t$" << fltPayTotal << endl;
    
    for(int i = 2 ; i <= intPayDays ; i++)
    {
        intPayPennies *= 2;
        fltPayTotal = intPayPennies / 100.0f;
        cout << i << "\t\t\t\t$" << fltPayTotal << endl;
    }
    
    
    return 0;
}


