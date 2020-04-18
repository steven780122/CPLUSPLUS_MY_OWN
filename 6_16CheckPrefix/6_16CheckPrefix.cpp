// 6_16CheckPrefix.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>
#include <vector>
#include <iostream>


using namespace std;

int main()
{
	int iTemp1 = 0;
	int iTemp2 = 0;

	vector<int> ivecNumber1;
	vector<int> ivecNumber2;

	cout << "Please enter some numbers in first vector: (Ctrl + Z to end)" << endl;
	while (cin >> iTemp1)
	{
		ivecNumber1.push_back(iTemp1);
	}


	cin.clear();  //clear the flag

	cout << "\nThen..." << endl;
	cout << "Please enter some numbers in second vector: (Ctrl + Z to end)" << endl;
	
	while (cin >> iTemp2)
	{
		ivecNumber2.push_back(iTemp2);
	}

	cin.clear();

	cout << "The vector 1 are as follows:" << endl;
	for (vector<int>::iterator iterIndex = ivecNumber1.begin(); iterIndex != ivecNumber1.end(); iterIndex++)
	{
		cout << *iterIndex << "\t";
	}

	cout << "\nThe vector 2 are as follows:" << endl;
	for (vector<int >::iterator iterIndex = ivecNumber2.begin(); iterIndex != ivecNumber2.end(); iterIndex++)
	{
		cout << *iterIndex << "\t";
	}

	if (ivecNumber1.size() >= ivecNumber2.size())
	{
		for (vector<int>::size_type uiIndex = 0; uiIndex != ivecNumber2.size(); uiIndex++)
		{
			if (ivecNumber2[uiIndex] != ivecNumber1[uiIndex])
			{
				cout << "\nNone of them are the prefix of the other!" << endl;
				goto End;		
			}
		}
		
		cout << "\nvector 2 is prefix of vector 1!\n";
	}
	else
	{
		for (vector<int>::size_type uiIndex = 0; uiIndex != ivecNumber1.size(); uiIndex++)
		{
			if (ivecNumber1[uiIndex] != ivecNumber2[uiIndex])
			{
				cout << "\nNone of them are the prefix of the other!" << endl;
				goto End;		
			}
		}

		cout << "\nvector 1 is prefix of vector 2!\n";

	}

End:

	system("pause");
	return EXIT_SUCCESS;
}
