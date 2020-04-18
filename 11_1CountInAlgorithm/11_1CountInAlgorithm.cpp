// 11_1CountInAlgorithm.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int iTemp = 0;
	vector<int> ivecNumber;

	cout << "Please enter some integers: (Ctrl + Z to end)" << endl;
	
	while (cin >> iTemp)
	{
		ivecNumber.push_back(iTemp);
	}

	cin.clear();
	cout << "\nThe numbers you type are as follows:" << endl;
	for (vector<int>::iterator iterIndex = ivecNumber.begin(); iterIndex != ivecNumber.end(); iterIndex++)
	{
		cout << *iterIndex << " ";

	}

	int iSearch = 0;
	cout << "\nPlease enter a value that you want to know the times shows in the vector." << endl;
	cin >> iSearch;

	cin.clear();
	int iFindTimes = 0;
	iFindTimes = count(ivecNumber.begin(), ivecNumber.end(), iSearch);

	cout << "It shows " << iFindTimes << " times!" << endl;


	system("pause");
	return EXIT_SUCCESS;
}

