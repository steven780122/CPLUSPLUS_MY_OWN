// TestConstVectorIterator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>
#include <vector>
#include <iostream>

using namespace std;

int main()
{
	vector<int> iVector(5,10);

	cout << "The numbers you type are as follows:\n";
	for (vector<int>::const_iterator iIterator = iVector.begin(); iIterator != iVector.end(); iIterator++)
	{
		*iIterator = 5;
		cout << *iIterator << " " ;
	}

	system("pause");
	return EXIT_SUCCESS;
}