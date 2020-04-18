// 3_7TestString.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <stdlib.h>
#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main()
{
	string strTemp1 = "";
	string strTemp2 = "";
	string strTemp3 = "";

	//compare the size
	cout << "Please enter two string to judge if they are equal." << '\n';
	cin >> strTemp1 >> strTemp2;

	if (strTemp1 == strTemp2)
	{
		cout << "Two string are equal!" << endl;
	}
	else if (strTemp1 > strTemp2)
	{
		cout << strTemp1 << " is bigger\n";
	}
	else
	{
		cout << strTemp2 << " is bigger\n";
	}

	//compare the size
	if (strTemp1.size() == strTemp2.size())
	{
		cout << "The size of " << strTemp1 << " " << strTemp2 << " are equal!\n";
	}
	else if (strTemp1.size() > strTemp2.size())
	{
		cout << "The size of " << strTemp1 << " is bigger!\n";
	}
	else
	{
		cout << "The size of " << strTemp2 << " is bigger!\n";
	}

	//concatenate
	cout << "The concatenate string is : " << (strTemp1 +  "!") + strTemp2 << endl;

	//delete punctuation
	cout << "The string after deleting punctuation is:\n";

	for (string::size_type uiIndex = 0; uiIndex < strTemp1.size(); uiIndex++)
	{
		if (!ispunct(strTemp1[uiIndex]))
		{
			strTemp3 = strTemp3 + strTemp1[uiIndex];      //不能在此直寫strTemp3[uiIndex]  會溢出
		}

	}

	cout << strTemp3 << endl;
	

	system("pause");
	return EXIT_SUCCESS;

}