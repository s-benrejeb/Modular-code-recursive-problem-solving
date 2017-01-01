/*
 * Problem3.cpp
 *
 *  Created on: Mar 8, 2016
 *      Author: Sarah
 */

#include<iostream>

using namespace std;

int Power( int base , int exponent);//defining the function prototype of power

int main()
{
	int base = 0;//defining variables
	int exponent = 0;

	cout << "Enter base and exponent: ";//prompt user to enter data
	cin >> base >> exponent;//user enters data

	cout <<  "Power: " << Power(base , exponent ) << endl;//output power calculated with function

}

int Power( int base , int exponent )//defining function power
{
	int power = 0;//initializing power to 0

	for ( int i = 0 ; i < exponent ; i++ )
	{

		if ( exponent == 1 )//defining base case
			power = base;//when power equals to base, it is the base case
		else
			power = base * Power(base , exponent - 1 );//calculating power using recursion of function

	}
	return power;
}
