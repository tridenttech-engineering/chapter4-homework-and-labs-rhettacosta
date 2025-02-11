// Introductory11.cpp - displays ending balance
// Created by Rhett Acosta on 2/11/25

#include <iostream>
using namespace std;

int main() 
{
  // declare constants and variables
  double startingBalance = 0.0;
  double deposits = 0.0;
  double withdrawals = 0.0;
  double endingBalance = 0.0;

  // enter input items
  cout << "Starting balance: ";
  cin >> startingBalance;
  cout << "Deposits: ";
  cin >> deposits;
  cout << "Withdrawals: ";
  cin >> withdrawals;

  // calculate and display the ending balance
  endingBalance = startingBalance + deposits - withdrawals;
  cout << "Ending balance: " << endingBalance << endl;

  return 0;
} // end of main function