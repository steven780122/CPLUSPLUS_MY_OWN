// 5_18VectorStringPointer.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>
using namespace std;

int main()
{
	vector<string*> pstrVector;
	string strTemp = "";

	cout << "Please enter some string: (Ctrl + Z to end)" << endl;
	
	while(cin >> strTemp)
	{
		string *pStrTemp = new string;
		*pStrTemp = strTemp;
		pstrVector.push_back(pStrTemp);
	}

	cout << "The strings you type are as follows:" << endl;


	for (vector<string*>::iterator pstrIterator = pstrVector.begin(); pstrIterator != pstrVector.end(); pstrIterator++)
	{
		cout << **pstrIterator << " " << endl;
	}

	for (vector<string*>::iterator pstrIterator = pstrVector.begin(); pstrIterator != pstrVector.end(); pstrIterator++)
	{
		delete *pstrIterator;
	}

	system("pause");
	return EXIT_SUCCESS;
}
