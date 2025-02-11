//Lab4-6.cpp - displays the area of a triangle
//Created by Rhett Acosta on 2/11/25

#include <iostream>
using namespace std;

int main()
{
	//declare variables
	double base = 0.0;
	double height = 0.0;
	double area = 0.0;

	//enter input items
	cout << "Base: ";
	cin >> base;
	cout << "Height: ";
	cin >> height;

	//calculate and display area
	area = base * height / 2;
	cout << "Area: " << area << endl;

	return 0;
}	//end of main function