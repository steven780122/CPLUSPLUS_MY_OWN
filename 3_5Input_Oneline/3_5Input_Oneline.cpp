// 3_5Input_Oneline.cpp : Defines the entry point for the console application.
//
#include <stdafx.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	
	
	
	string strInput = "";
	

	cout << "Please type a string:" << endl;
	getline(cin, strInput);
	cout << "The string you input is:" << endl;
	cout << "size is:" << strInput.size() << '\n';
	
	system("pause");
	return EXIT_SUCCESS;
}