// 6_18CompareString.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string strTemp1 = "";
	string strTemp2 = "";
	string strContinue = "";

	do 
	{
		cout << "Please enter 2 string to compare which one is bigger!" << endl;

		

		cin >> strTemp1 >> strTemp2;

		if (strTemp1 > strTemp2)
		{
			cout << strTemp1 << " is bigger then " << strTemp2 << endl;
		}
		else if (strTemp1 == strTemp2)
		{
			cout << strTemp1 << " is the same as " << strTemp2 << endl;
		}
		else
		{
			cout << strTemp1 << " is smaller then " << strTemp2 << endl;
		}

		cout << "Do you want to continue ? (Y or N)" << endl;
		cin >> strContinue;

	} while (strContinue == "N");
	




	system("pause");
	return EXIT_SUCCESS;
}

