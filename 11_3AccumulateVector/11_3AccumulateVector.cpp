// 11_3AccumulateVector.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <cstdlib>
#include <numeric>

using namespace std;

int main()
{
	vector<int> ivecNumbers;

	cout << "Please enter some integers to count the sum. (Ctrl + Z to end)" << endl;

	int iTemp = 0;

	while (cin >> iTemp)
	{
		ivecNumbers.push_back(iTemp);
	}

	cout << "\nThe numbers you type are as follows:" << endl;
	for (vector<int>::iterator iterIndex = ivecNumbers.begin(); iterIndex != ivecNumbers.end(); iterIndex++)
	{
		cout << *iterIndex << " ";
	}

	int iSum = 0;

	iSum = accumulate(ivecNumbers.begin(), ivecNumbers.end(), 0);		//跟著第3參數的type
	cout << "The sum is " << iSum << " ." << endl;



	system("pause");
	return EXIT_SUCCESS;
}

