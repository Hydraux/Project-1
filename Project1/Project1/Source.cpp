/*
Author: Ryan Bezold
Assignment: Project 1
Section 402
*/

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string> 
using namespace std;

int main()
{
	ifstream file;
	int GasH, GasM, GasL;
	int PriceH, PriceM, PriceL, discount;
	string isRewards;
	int numRewards;

	//Open file for reading
	file.open("pumpin.txt");

	if (file.fail())
	{
		cout << "Unable to read input file..." << endl;
		system("PAUSE");
		return 0;
	}
	else
	{

		//Read Gas amount
		file >> GasH >> GasM >> GasL;

		//Read price per gallon for high medium and low octane levels
		file >> PriceH >> PriceM >> PriceL;

		//print read information
		cout << "Today's Readings:\t Hi = " << GasH << " Med = " << GasM << " Low = " << GasL << endl;
		cout << "Today's PPG:\t  Hi = " << PriceH << " Med = " << PriceM << " Low = " << PriceL << endl;

		//display logo
		cout << "+----------------------------------------------+" << endl;
		cout << "|   WELCOME TO HUCKABILLY'S SELF SERVE         |" << endl;
		cout << "|                Ryan, Owner                   |" << endl;
		cout << "+----------------------------------------------+" << endl;

		//ask if rewards member
		cout << "Are you a rewards member?";
		cin >> isRewards;

		//if they are ask for rewards number
		switch (toupper(isRewards[0]))
		{
			case 'Y':
				//determine price per gallon discount
				discount = ((numRewards % 10) + 1) / 100;
			case 'N':
				discount = 0;
		}
		while (isRewards != "shutdown")
		{

		}
	

	}

}