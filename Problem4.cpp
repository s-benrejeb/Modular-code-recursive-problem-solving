/*
 * Problem4.cpp
 *
 *  Created on: Mar 9, 2016
 *      Author: Sarah
 */


#include <iostream>

using namespace std;

unsigned int quotient (unsigned int a, unsigned int b);//defining function prototypes
unsigned int remainder (unsigned int a, unsigned int b);
void printDigits(unsigned int number);

int main()
{
	unsigned int number = 0;//defining variables
	cout <<"Enter number: ";//Prompt user to enter data
	cin >> number;////user enters data

	if ( number > 32767 )
		cout << "Incorrect number. Please try again!" <<endl;//error message

	else if ( number < 1 )
		cout << "Incorrect number. Please try again!" <<endl;//error message

	else
		printDigits(number);//display spaces between digits of number using DisplayDigits function

}

unsigned int quotient(unsigned int a, unsigned int b)//defining quotient function
{
	unsigned int quotient = 0;
	quotient = a / b;//use division for this function
	return quotient;
}

unsigned int remainder( unsigned int a, unsigned int b)//defining remainder function
{
	unsigned int remainder = 0;
	remainder = a % b;//use modulus to find reaminder of division
	return remainder;
}

void printDigits(unsigned int number)//defining function that prints spaces between digits
{

	unsigned int counter =0 ;//initialize counter to 0, which is going to be used for the for loop

	if (number >= 10000)//make counter equal to 4 in case of 5 digit number
		counter = 4;
	else if (number >= 1000)//make counter equal to 3 in case of 4 digit number
		counter = 3;
	else if (number >= 100)//make counter equal to 2 in case of 3 digit number
		counter = 2;
	else if (number >= 10)//make counter equal to 1 in case of 2 digit number
		counter = 1;


	for ( unsigned int i=0; i <= counter ; ++i)
	{


		if ( number >= 10000)//for 5 digit numbers
		{
			cout << quotient(number, 10000) <<"  ";//find quotient to isolate first digit and add space
			number = remainder(number, 10000);//find remainder
		}
		else if ( number >= 1000 )//for 4 digit numbers
		{
			cout << quotient(number, 1000) <<"  ";//find quotient to isolate second digit and add space
			number = remainder(number, 1000);//find remainder
		}
		else if (number >= 100)//for 3 digit numbers
		{
			cout << quotient(number, 100) << "  ";//find quotient to isolate third digit and add space
			number = remainder(number, 100);//find remainder
		}
		else if (number >= 10)//for 2 digit numbers
		{
			cout << quotient(number, 10) <<"  ";//find quotient to isolate fourth digit and add space
			number = remainder(number, 10);//find remainder
		}
		else
			cout << quotient(number, 1);//find last digit and print it

	}

}


