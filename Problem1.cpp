/*
 * Problem1.cpp
 *
 *  Created on: Mar 8, 2016
 *      Author: Sarah
 */
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double calculateCharges(double hours);//defining function to calculate Charges per hour

int main()
{
	double charge = 0;//defining variables
	double hours = 0;
	double totalHours = 0;
	double totalCharge = 0;

	cout << "Cars" << "\t\t"<< "Hours" << "\t\t" << "Charges" << endl;//Output headers of table


	for ( int j = 1; j <= 3; j++ )
	{
		cout << j << "\t\t"; //output the car number
		cin >> hours;//user inputs hours
		cout << "\t\t"; //output space for format of table
		cout << fixed << setprecision (2);//set decimal value to 2


		if( hours <= 3 )
		{
			charge = 2.00;//set charge to constant value for this range of hours
			cout << "\t\t" << charge << endl;// output the charge
		}

		else if( hours == 24 )
		{
			charge = 10.00;//set charge to constant value for this range of hours
			cout << "\t\t" << charge << endl;//output the charge
		}
		else if ( hours > 3 && hours < 24 ) //set the range between 3 and 24 hours
			charge = calculateCharges(hours);//calculate the charges for that range of time
			cout << "\t\t" << charge << endl;// output the calculated charges

		totalCharge += charge;//sum the charges after each loop
		totalHours += hours;// sum the hours after each loop
	}
	cout << "Total" << "\t\t" << totalHours << "\t\t" << totalCharge <<endl;// output the sum of hours
													//and the sum of charges
}

double calculateCharges(double hours)//defining the function
{
	double charge = 2.00 + 0.5 * ceil(hours);// calculate the charge
	return charge;
}



