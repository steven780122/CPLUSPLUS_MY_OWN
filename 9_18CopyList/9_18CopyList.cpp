// 9_18CopyList.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <list>
#include <vector>
#include <deque>
#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
	deque<int> idequeEven, idequeueOdd;
	list<int> ilistIntegers;

	cout << "Please enter some integers! (Ctrl + Z to end)" << endl;
	
	int iTempValue = 0;
	while (cin >> iTempValue)
	{
		ilistIntegers.push_back(iTempValue);
	}

	cout << "\nThe integers you enter are as follows:" << endl;
	for (list<int>::iterator iterIndex = ilistIntegers.begin(); iterIndex != ilistIntegers.end(); iterIndex++)
	{
		cout << *iterIndex << " ";
	}

	for (list<int>::iterator iterIndex = ilistIntegers.begin(); iterIndex != ilistIntegers.end(); iterIndex++)
	{
		if (*iterIndex % 2 == 0)
		{
			idequeEven.push_back(*iterIndex);
		}
		else
		{
			idequeueOdd.push_back(*iterIndex);
		}
	}

	cout << "\nThe even integers you type in the deque are as follows:" << endl;
	for (deque<int>::iterator iterIndex = idequeEven.begin(); iterIndex != idequeEven.end(); iterIndex++)
	{
		cout << *iterIndex << " ";
	}

	cout << "\nThe odd integers you type in the deque are as follows:" << endl;
	for (deque<int>::iterator iterIndex = idequeueOdd.begin(); iterIndex != idequeueOdd.end(); iterIndex++)
	{
		cout << *iterIndex << " ";
	}

	system("pause");
	return EXIT_SUCCESS;
}