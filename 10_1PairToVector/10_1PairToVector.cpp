// 10_1PairToVector.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cstdlib>
#include <string>
#include <vector>
#include <iostream>
#include <utility>

using namespace std;

int main()
{
	string strTemp = "";
	int iTemp = 0;
	pair<string, int> pairTemp;
	vector< pair<string, int> > pairvecData;

	cout << "Please enter a string and a int:(Ctrl + Z to end)" << endl;
	while (cin >> strTemp >> iTemp)
	{
		pairTemp = make_pair(strTemp, iTemp);
		pairvecData.push_back(pairTemp);
		cout << "Please enter a string and a int:(Ctrl + Z to end)" << endl;
	}

	cout << "\n";
	for (vector< pair<string, int> >::iterator iterIndex = pairvecData.begin(); iterIndex != pairvecData.end(); iterIndex++)
	{
		cout << "String:" << iterIndex->first << endl;
		cout << "Int:" << iterIndex->second << endl;
	}


	system("pause");
	return EXIT_SUCCESS;
}