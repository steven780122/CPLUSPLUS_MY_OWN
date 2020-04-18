// 5_20_21InputSmallerNum.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	/*cout << "Please enter one pair number to figure which number is bigger: (Ctrl + Z to end)" << endl;

	int iTemp1 = 0;
	int iTemp2 = 0;
	int iMax = 0;

	while(cin >> iTemp1 >> iTemp2)
	{
		iMax = iTemp1 > iTemp2 ? iTemp1 : iTemp2;

		cout << iMax << " is bigger." << endl;
	}
*/ 

	//5.21
	fflush(stdin);
	vector<int> iVector;

	cout << "Please enter integers than we will show the odd number: (Ctrl + Z to end)" << endl;
	
	int iTemp = 0;

	while(cin >> iTemp)
	{
		iVector.push_back(iTemp);
	}

	cout << "The numbers you type are as follows:\n";
	for (vector<int>::iterator iIterator = iVector.begin(); iIterator != iVector.end();iIterator++)
	{
	
		cout << *iIterator << " " ;
	}


	cout << "\nThe odd numbers you type are as follows:\n";
	for (vector<int>::iterator iIterator = iVector.begin(); iIterator != iVector.end();iIterator++)
	{
		if (*iIterator % 2 != 0)
		{
			*iIterator = *iIterator * 2;
		}
		cout << *iIterator << " " ;
	}









	system("pause");
	return EXIT_SUCCESS;
}

