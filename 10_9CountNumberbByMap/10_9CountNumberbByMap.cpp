// 10_9CountNumberbByMap.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <map>
#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
	string strTemp = "";
	map<string, int> mapWord;

	cout << "Please enter some strings to count the times it were typed. (Ctrl + Z to end)" << endl;

	while (cin >> strTemp)
	{
		++mapWord[strTemp];
	}

	cout << "String:\t\tNumbers\n" << endl;
	for (map<string, int>::iterator iterIndex = mapWord.begin(); iterIndex != mapWord.end(); iterIndex++)
	{
		cout << (*iterIndex).first << "\t\t" << (*iterIndex).second << endl;
	}
	
	system("pause");
	return EXIT_SUCCESS;
}