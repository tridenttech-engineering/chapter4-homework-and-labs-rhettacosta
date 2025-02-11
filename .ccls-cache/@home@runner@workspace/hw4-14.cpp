// Intermediate14.cpp - displays total sold and percentages of small, medium,
// large, and family sold Created by Rhett Acosta on 2/11/25

#include <iostream>
using namespace std;

int main() 
{
  // declare constants and variables
  double small = 0.0;
  double medium = 0.0;
  double large = 0.0;
  double family = 0.0;
  double total = 0.0;
  double smallPercent = 0.0;
  double mediumPercent = 0.0;
  double largePercent = 0.0;
  double familyPercent = 0.0;

  // enter input items
  cout << "Small: ";
  cin >> small;
  cout << "Medium: ";
  cin >> medium;
  cout << "Large: ";
  cin >> large;
  cout << "Family: ";
  cin >> family;

  // calculate and display the total sold
  total = small + medium + large + family;
  cout << "Total sold: " << total << endl;
  smallPercent = small / total * 100;
  mediumPercent = medium / total * 100;
  largePercent = large / total * 100;
  familyPercent = family / total * 100;
  cout << "Small: " << smallPercent << "%" << endl;
  cout << "Medium: " << mediumPercent << "%" << endl;
  cout << "Large: " << largePercent << "%" << endl;
  cout << "Family: " << familyPercent << "%" << endl;

  return 0;
} // end of main function