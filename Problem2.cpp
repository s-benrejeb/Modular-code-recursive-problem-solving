/*
 * Problem2.cpp
 *
 *  Created on: Mar 8, 2016
 *      Author: Sarah
 */

#include <iostream>

using namespace std;

int power(int base, int exponent);//defining function prototype to calculate power

int main()
{
	int base = 0;//defining variables
	int exponent = 0;

	cout << "Enter the base and the exponent: ";//prompt user to enter data
	cin >> base >> exponent;//user enters data

	cout << "Power: " << power(base, exponent) << endl;//output calculated power of entered data

}

int power( int base, int exponent )//defining the function
{
	int power = base;//initialize the power value to the base
	for ( int i = 1 ; i < exponent ; i++ )//
	{
		power *= base;//operation to calculate power using iteration
	}
	return power;
}

