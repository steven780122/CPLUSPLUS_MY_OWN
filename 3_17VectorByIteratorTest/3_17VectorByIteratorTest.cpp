// 3_17VectorByIteratorTest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <vector>
#include <stdlib.h>
#include <iostream>

#define LINE_NUMBER	6

using namespace std;

int main()
{
	vector<int> iVectorNumber;
	int iTempValue = 0;

	cout << "Please enter numbers to count the sum of every pairs of numbers:(Ctrl + Z to end)\n";

	while (cin >> iTempValue)
	{
		iVectorNumber.push_back(iTempValue);
	}

	cout << "The number you type are:\n";
	for (vector<int>::iterator itIndex = iVectorNumber.begin(); itIndex != iVectorNumber.end(); itIndex++)
	{
		cout << *itIndex << " ";
	}

	vector<int>::size_type uiNumberCount = 0;
	if (iVectorNumber.size() % 2 == 0)
	{
		cout << "\nThe sum of every pair number are:\n";
		for (vector<int>::iterator itIndex = iVectorNumber.begin(); itIndex != iVectorNumber.end(); itIndex+=2)
		{
			cout << *itIndex + *(itIndex + 1) << " ";
			uiNumberCount++;
			if (uiNumberCount % LINE_NUMBER == 0)
			{
				cout << endl;
			}		
		}		
	}
	else
	{
		vector<int>::iterator itIndex;
		cout << "\nThe sum of every pair number are:\n";
		for (itIndex = iVectorNumber.begin(); itIndex != iVectorNumber.end() - 1; itIndex+=2)
		{
		
			cout << *itIndex + *(itIndex + 1) << " ";
			uiNumberCount++;
			if (uiNumberCount % LINE_NUMBER == 0)
			{
				cout << endl;
			}
		}

		cout << "\nThe last number is:" << *(itIndex) << endl;
	}

	system("pause");
	return EXIT_SUCCESS;

}

