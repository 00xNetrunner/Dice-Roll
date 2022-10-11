// Written By Leif Bruc 
// 11/10/22
/*
 * This program will simulate a dice roll, the dice will only roll till they hit six and the program will count
 * how many times it will take till it lands of Six
*/

#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main()
{
	srand(time(0));
	int instances = 0;
	int roll = 0;
	int NoOfRolls = 0;
	int totalOfRolls = 0;
	int Average = 0;
	int Cont;

	do {
		roll = rand() % 6 + 1;
		cout << "Rolling Dice.....     ";
		cout << "\n------------------\n";
		do {
			roll = rand() % 6 + 1;
			NoOfRolls++;
			cout << "Dice Landed on: " << roll << " Attempt: " << NoOfRolls << endl;
		} while (roll != 6);

		// How many times program has ran
		instances++;  
		cout << "\n                 Averages and Totals                   ";
		cout << "\n-----------------------------------------------------\n";
		cout << "You have ran this program " << instances << " times." << endl;


		// Complete Total of rolls all instances
		totalOfRolls = totalOfRolls + NoOfRolls;
		cout << "Complete Total of rolls of all instances: " << totalOfRolls << endl;

		// Average of Rolls per instance
		Average = totalOfRolls / instances;
		cout << "The Average rolls of this instance is " << Average << endl;

		// Continue 
		cout << "\nWould you like to continue?: [1]Yes/[0]No \n";
		cin >> Cont;
	} while (Cont == 1);
};