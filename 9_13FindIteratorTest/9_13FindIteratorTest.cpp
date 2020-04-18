// 9_13FindIteratorTest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <vector>
#include <iostream>
#include <cstdlib>

using namespace std;

vector<int>::iterator FindValueIterator(vector<int>::iterator iterBegin, vector<int>::iterator iterEnd, int iValue)
{
	while (iterBegin != iterEnd)
	{
		if (*iterBegin == iValue)
		{
			break;
		}
		else
		{
			iterBegin++;
		}
	}

	return iterBegin;
}

int main()
{
	int iTemp[] = {0, 1, 2, 3, 4, 5, 6, 7};
	int iTempValue = 0;

	vector<int> ivecTemp(iTemp, iTemp + sizeof(iTemp) / sizeof(int));
	cout << "Please enter a value." << endl;
	cin >> iTempValue;	


	vector<int>::iterator iterIndex = FindValueIterator(ivecTemp.begin(), ivecTemp.end(), iTempValue);
	if (iterIndex != ivecTemp.end())
	{
		cout << "Find value " << *iterIndex << " in vector!" << endl;
	}
	else
	{
		cout << "Value is not in the vector!" << endl;
	}

	system("pause");
	return EXIT_SUCCESS;

}



//for test
/*
bool FindInt(vector<int>::iterator iterBegin, vector<int> iterEnd, int iValue)
{
	while (iterBegin != iterEnd)
	{
		if (*iterBegin == iValue)
		{
			break;
		}
		else
		{
			iterBegin++;
		}
	}

	if (iterBegin != iterEnd)
	{
		return true;
	}
	else
	{
		return false;
	}


}

*/ 