// 9_28AssignString.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <cstdlib>
#include <vector>
#include <list>
#include <iostream>

using namespace std;

int main()
{
	//char *apszTemp[] = {"Alice", "Bob", "Carry", "Dorry"};
	vector<string> strListTemp; 
	cout << "Please enter some string (Ctrl + Z to end)" << endl;
	string strTemp = "";
	while (cin >> strTemp)
	{
		strListTemp.push_back(strTemp);
	}
	
	
	//list<char*> strListTemp(apszTemp, apszTemp + sizeof(apszTemp) / sizeof(char*));
	vector<string> strvecTemp;

	strvecTemp.assign(strListTemp.begin(), strListTemp.end());
	
	cout << "\nAfter assigning:" << endl;
	for (vector<string>::iterator iterIndex = strvecTemp.begin(); iterIndex != strvecTemp.end(); iterIndex++)
	{
		cout << (*iterIndex) << " ";
	}

	system("pause");
	return EXIT_SUCCESS;
}