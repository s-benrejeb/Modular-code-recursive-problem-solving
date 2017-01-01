/*
 * Problem5.cpp
 *
 *  Created on: Mar 11, 2016
 *      Author: Sarah
 */

#include <iostream>
using namespace std;

void wages(int F[11]);//define functions
void display(int S[9]);
int Sales[11];//define global arrays
int Salary[11];
int frequency[9];

int main()
{
	cout<<"Please enter 11 Sales values: ";//prompt user to enter data
	for(int i=0 ; i<11 ; i++)
	{
		int sales=0;//initialize variable
		cin>> sales;//user enters data
		Sales[i]=sales;//assign input data to the array Sales
	}
	wages(Sales);//calculate wages using function
    display(Salary);//display salary ranges with frequency of occurrence of each range

}
void wages(int F[11])//define function that calculates wages
{
	for (int k = 0; k < 11 ; k ++)
		Salary [k] = 200.00 + 0.09 * F[k];//operation that calculates wages, assigning every
										// calculated value to an index of array Salary
}


void display(int S[11])//define function display that displays wage occurrence frequency
{
	for( int j=10; j>=0; j--)
	    {
	    	if (S[j] >= 1000)//for range 1000 and more, increase frequency at index 8
	    		frequency[8]++;

	    	else if (S[j] >= 900)// for range 900-999, increase frequency at index 7
	    		frequency[7]++;

	    	else if (S[j] >= 800)// for range 800-899, increase frequency at index 6
	    	    frequency[6]++;

	    	else if (S[j] >= 700)//for range 700-799, increase frequency at index 5
	    	    frequency[5]++;

	    	else if (S[j] >= 600)// for range 600-699, increase frequency at index 4
	    	    frequency[4]++;

	    	else if (S[j] >= 500)// for range 500-599, increase frequency at index 3
	    		frequency[3]++;

	    	else if (S[j] >= 400)// for range 400-499, increase frequency at index 2
	    	    frequency[2]++;

	    	else if (S[j] >= 300)// for range 300-399, increase frequency at index 1
	    	    frequency[1]++;

	    	else if (S[j] >= 200)// for range 200-299, increase frequency at index 0
	    	    frequency[0]++;
	    }
	cout << "Range: \t\t" << "Total frequency: "<<endl;//output frequency for each category
	cout << "$200-299: \t\t" << frequency[0] <<endl;
	cout << "$300-399: \t\t" << frequency[1] <<endl;
	cout << "$400-499: \t\t" << frequency[2] <<endl;
	cout << "$500-599: \t\t" << frequency[3] <<endl;
	cout << "$600-699: \t\t" << frequency[4] <<endl;
	cout << "$700-799: \t\t" << frequency[5] <<endl;
	cout << "$800-899: \t\t" << frequency[6] <<endl;
	cout << "$900-999: \t\t" << frequency[7] <<endl;
	cout << "$1000 and over: \t" << frequency[8] <<endl;
}





