// 3_13VectorTest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector<int> iVector;
	int iValue = 0;

	cout << "Please enter numbers (Ctrl + Z to end)\n";

	while (cin >> iValue)
	{
		iVector.push_back(iValue);
	}

	cout << "You type " << iVector.size() << " numbers\n";

	if (iVector.size() % 2 == 0)
	{			
		cout << "The sum of every pair number are:\n";
		for (vector<int>::size_type uiIndex = 0; uiIndex < iVector.size(); uiIndex += 2)
		{
			int iSum = 0;
			iSum = iVector[uiIndex] + iVector[uiIndex + 1];
			cout << iSum << " ";
		}

		cout << endl;

		cout << "The sum of every first and last number are:\n";
		for (vector<int>::size_type uiIndex = 0; uiIndex < iVector.size() / 2; uiIndex++)
		{
			int iSum = 0;
			iSum = iVector[uiIndex] + iVector[iVector.size() - uiIndex - 1];
			cout << iSum << " ";
		}

		cout << endl;
	}
	else
	{		
		cout << "The sum of every pair number are:\n";
		for (vector<int>::size_type uiIndex = 0; uiIndex < iVector.size() - 1; uiIndex += 2)
		{
			int iSum = 0;
			iSum = iVector[uiIndex] + iVector[uiIndex + 1];
			cout << iSum << " ";
		}

		cout << endl;

		cout << "The sum of every first and last number are:\n";
		for (vector<int>::size_type uiIndex = 0; uiIndex < iVector.size() / 2; uiIndex++)
		{
			int iSum = 0;
			iSum = iVector[uiIndex] + iVector[iVector.size() - uiIndex - 1 - 1];
			cout << iSum << " ";
		}

		cout << endl;
		cout << "The last number is: " <<  iVector[iVector.size() - 1] << endl;;
	}

	system("pause");
	return EXIT_SUCCESS;
}

