// 11_9PrintLengthMoreThan4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <cstdlib>

using namespace std;

bool isShorter( const string &strTemp1, const string &strTemp2)
{
	return strTemp1.size() < strTemp2.size();
}

bool GT4(const string &strTemp)
{
	return strTemp.size() >= 4;
}

int main()
{   
	string strTemp = "";
	vector<string> strvecWords;
	cout << "Please enter some strings: (Ctrl + Z to End)" << endl;

	while (cin >> strTemp)
	{
		strvecWords.push_back(strTemp);
	}

	sort(strvecWords.begin(), strvecWords.end());
	vector<string>::iterator iter_EndUnique = unique(strvecWords.begin(), strvecWords.end());
	strvecWords.erase(iter_EndUnique, strvecWords.end());
	
	stable_sort(strvecWords.begin(), strvecWords.end(), isShorter);

	cout << "\nThe vector now are as follows:" << endl;
	for (vector<string>::iterator iterIndex = strvecWords.begin(); iterIndex != strvecWords.end(); iterIndex++)
	{
		cout << *iterIndex << " ";
	}
	
	vector<string>::size_type uiNumbers = count_if(strvecWords.begin(), strvecWords.end(), GT4);

	cout << "There are " << uiNumbers << " strings the size is more than 4" << endl;

	system("pause");
	return EXIT_SUCCESS;
}
