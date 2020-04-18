// 10_26CreateAuthorDataByMultimap.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cstdlib>
#include <string>
#include <map>
#include <iostream>

using namespace std;

int main()
{
	multimap<string, string> multimapAuthors;
	string strAuthorTemp = "", strBookNameTemp = "", strDeleteAuthorName = "";
	

	do 
	{
		cout << "Please enter the name of a author: (Ctrl + Z to end)" << endl;
		cin >> strAuthorTemp;
		if (!cin)
		{
			break;
		}

		cout << "Please enter the book name from Him/Her: (Ctrl + Z to end)" << endl;
		while (cin >> strBookNameTemp)
		{
			multimapAuthors.insert(make_pair(strAuthorTemp, strBookNameTemp));
			cin.clear();
		}

		cin.clear();
	} while (cin);

	cin.clear();
	cout << "Please enter a author name to delete the book data:" << endl;
	cin >> strDeleteAuthorName;

	multimap<string, string>::iterator iterMapIndex = multimapAuthors.find(strDeleteAuthorName);

	if (iterMapIndex == multimapAuthors.end())
	{
		cout << "No this Author!" << endl;
	}
	else
	{
		multimapAuthors.erase(strDeleteAuthorName);
	}

	cout << "Author:\t\tBooks:" << endl;

	for (iterMapIndex = multimapAuthors.begin(); iterMapIndex != multimapAuthors.end(); iterMapIndex++)
	{
		cout << iterMapIndex->first << "\t\t" << iterMapIndex->second << endl;
	}

	system("pause");
	return EXIT_SUCCESS;
}

