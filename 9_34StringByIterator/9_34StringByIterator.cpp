// 9_34StringByIterator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <cstdlib>
#include <iostream>
#include <cctype>

using namespace std;

int main()
{
	string strTemp = "";

	while (cin >> strTemp)
	{
		cout << "The upper case of it is:" << endl;
		for (string::iterator iterIndex = strTemp.begin(); iterIndex != strTemp.end(); iterIndex++)
		{
			*iterIndex = (char)toupper(*iterIndex);
			cout << *iterIndex;
		}

	}

	system("pause");
	return EXIT_SUCCESS;
}
