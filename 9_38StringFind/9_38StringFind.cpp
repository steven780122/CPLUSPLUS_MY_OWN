// 9_38StringFind.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
	string strOrigin = "ab2c3d7R4E6";
	string strNumber = "0123456789";
	string strAlphabet = "abcdefghijklmnopqrstuvwxyz ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	string::size_type uiPosition = 0;
	
	while ((uiPosition = strOrigin.find_first_of(strNumber, uiPosition)) != string::npos)
	{
		cout << "Find Number " << strOrigin[uiPosition] << " at index " << uiPosition << endl;
		uiPosition++;
	};

	uiPosition = 0;

	while ((uiPosition = strOrigin.find_first_of(strAlphabet, uiPosition)) != string::npos)
	{
		cout << "Find alphabet " << strOrigin[uiPosition] << " at index " << uiPosition << endl;
		uiPosition++;
	};

	//by find_first_not_of

	uiPosition = 0;

	while ((uiPosition = strOrigin.find_first_not_of(strAlphabet, uiPosition)) != string::npos)
	{
		cout << "Find Number " << strOrigin[uiPosition] << " at index " << uiPosition << endl;
		uiPosition++;
	};

	uiPosition = 0;
	while ((uiPosition = strOrigin.find_first_not_of(strNumber, uiPosition)) != string::npos)
	{
		cout << "Find Alphabet " << strOrigin[uiPosition] << " at index " << uiPosition << endl;
		uiPosition++;
	};

	




	system("pause");
	return EXIT_SUCCESS;
}