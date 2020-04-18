// 10_18SearchKeyNameByMap.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include <vector>
#include <map>
#include <cstdlib>
#include <utility>

using namespace std;

int main()
{
	map< string, vector<string> > mapChildren;
	string strSurname = "";
	string strChildren = "";

	do 
	{
		vector<string> strvecChildName;
		cout << "Please enter surname to create name data. (Ctrl + Z to end)" << endl;
		cin >> strSurname;

		if (!cin)
		{
			break;
		}

		pair< map<string, vector<string> >::iterator, bool > pairRet = mapChildren.insert(make_pair(strSurname, strvecChildName));  //if bool == 0 means its already existed 
		if (!pairRet.second)
		{
			cout << "The surname is already existed!" << endl;
			continue;
		}

		cout << "Please enter some children name. (Ctrl + Z to end)" << endl;
		while (cin >> strChildren)
		{
			pairRet.first->second.push_back(strChildren);
		}
		cin.clear();
	} while (cin);


	
	cout << "Please enter the surname to show the children.\n";
	cin.clear();
	string strSurnameSearch = "";
	
	cin >> strSurnameSearch;


	map< string, vector<string> >::iterator itermapIndex = mapChildren.find(strSurnameSearch);

	if (itermapIndex == mapChildren.end())
	{
		cout << "There is no this surname." << endl;
		
	}
	else
	{
		cout << "Children name are as follows:" << endl;

		for (vector<string>::iterator iterChildNameIndex = itermapIndex->second.begin(); iterChildNameIndex != itermapIndex->second.end(); iterChildNameIndex++)
		{
			cout << *iterChildNameIndex << " ";
		} 
	}

	system("pause");
	return EXIT_SUCCESS;
}
