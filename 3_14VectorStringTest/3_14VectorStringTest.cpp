// 3_14VectorStringTest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <vector>
#include <stdlib.h>
#include <iostream>
#include <cctype>

#define ENDLINE_NUMBERS	8

using namespace std;

int main()
{
	vector<string> strVector;    //vector «Ü¹³°ÊºA°}¦C!
	string strTemp = "";

	cout << "Please enter string to transfer lower case into upper case! (Ctrl + Z to end!)\n";

	while (cin >> strTemp)
	{
		strVector.push_back(strTemp);		
	}

	cout << "The string you enter are:\n";

	for (vector<int>::size_type uiIndex = 0; uiIndex < strVector.size(); uiIndex++)
	{
		cout << strVector[uiIndex] << " ";

		if (uiIndex % ENDLINE_NUMBERS == ENDLINE_NUMBERS - 1)
		{
			cout << endl;
		}
	}  

	cout << "\nThe string after transferring lower case into upper case are:\n";

	for (vector<int>::size_type uiIndex = 0; uiIndex < strVector.size(); uiIndex++)
	{
		for (vector<int>::size_type uiIndex2 = 0; uiIndex2 < strVector[uiIndex].size(); uiIndex2++)
		{
			strVector[uiIndex][uiIndex2] = (char)toupper(strVector[uiIndex][uiIndex2]);
		}
	}
	
	for (vector<int>::size_type uiIndex = 0; uiIndex < strVector.size(); uiIndex++)
	{
		cout << strVector[uiIndex] << " ";

		if (uiIndex % ENDLINE_NUMBERS == ENDLINE_NUMBERS - 1)
		{
			cout << endl;
		}
	}  

	system("pause");
	return EXIT_SUCCESS;
}
