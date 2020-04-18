// 7_3PowerCall.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;

int CountExponential(const int iTeam1, const int iTemp2, int *piResult)
{
	if (!piResult)
	{
		cout << "Parameter error!" << endl;
		return EXIT_FAILURE;
	}

	int iResult = 0;

	if (iTemp2 == 0)
	{
		iResult = 1;
	}
	else
	{
		int iRet = 0;
		iRet = CountExponential(iTeam1, iTemp2 - 1, &iResult);
		if (iRet == EXIT_FAILURE)
		{
			cout << "Call function error!" << endl;
			return EXIT_FAILURE;
		}
		
		iResult = iTeam1 * iResult;
	}

	*piResult = iResult;

	return EXIT_SUCCESS;
}

int main()
{
	string strLeave = "";

	do 
	{
		int iValueA = 0;
		int iValueB = 0;

		cout << "Please enter 2 integers to calculate power value." << endl;
		cout << "First, enter the base number:" << endl;
		cin >> iValueA;
		cout << "Second, enter the exponent number:" << endl;
		cin >> iValueB;

		int iRet = 0;
		int iResult = 0;
		iRet = CountExponential(iValueA, iValueB, &iResult);
		if (iRet == EXIT_FAILURE)
		{
			cout << "Count Exponential failed!" << endl;
			system("pause");
			return EXIT_FAILURE;
		}

		cout << "The " << iValueB << " power of " << iValueA << " is " << iResult <<endl;
		cout << "Do you want to leave ? (Y or N)" << endl;
		cin >> strLeave;

	} while ( strLeave ==  "N" || strLeave == "n");


	system("pause");
	return EXIT_SUCCESS;
}