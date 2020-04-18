// 3_18VectorIterator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <vector>
#include <iostream>
#include <stdlib.h>

#define NUMBER_CNT	10
#define TIMES		2

using namespace std;

int main()
{
	vector<int> iVector;
	int iTempValue = 0;

	cout << "Please enter " << NUMBER_CNT << "numbers.(Ctrl + l to end)" << endl;

	while (cin >> iTempValue)
	{
		iVector.push_back(iTempValue);
	}

	if (iVector.size() != NUMBER_CNT)
	{
		cout << "you have to type " << NUMBER_CNT << " numbers exactly" << endl;
		system("pause");
		return EXIT_FAILURE;
	}
	
	cout << "The number you type are as follows:\n";
	for (vector<int>::iterator itIndex = iVector.begin(); itIndex != iVector.end(); itIndex++)
	{
		cout << *(itIndex) << " ";
	}

	cout << "The number after " << TIMES <<" times you type are as follows:\n";
	for (vector<int>::iterator itIndex = iVector.begin(); itIndex != iVector.end(); itIndex++)
	{
		cout << TIMES * (*(itIndex)) << " ";
	}

	system("pause");
	return EXIT_SUCCESS;

}
