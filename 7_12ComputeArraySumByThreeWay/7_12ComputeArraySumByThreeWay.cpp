// 7_12ComputeArraySumByThreeWay.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <cstdlib>
#include <iostream>

using namespace std;

int CountByRange(const int *piTempA, const int *piTempB, int &iResult)
{
	if (!piTempA)
	{
		cout << "Error!" << endl;
		return EXIT_FAILURE;
	}

	if (!piTempB)
	{
		cout << "Error!" << endl;
		return EXIT_FAILURE;
	}

	iResult = 0;
	while (piTempA != piTempB)
	{
		iResult = iResult + *piTempA;
		piTempA++;
	}

	return EXIT_SUCCESS;
}

int CountByArraySize(const int aiTemp[], size_t uiSize, int &iResult)
{
	if (!aiTemp)
	{
		cout << "Error!" << endl;
		return EXIT_FAILURE;
	}

	iResult = 0;
	for (size_t uiIndex = 0; uiIndex < uiSize; uiIndex++)
	{
		iResult = iResult + aiTemp[uiIndex];
	}

	return EXIT_SUCCESS;
}

int CountByPointerSize(const int *piTemp, size_t uiSize, int &iResult)
{
	if (!piTemp)
	{
		cout << "Error!" << endl;
		return EXIT_FAILURE;
	}

	iResult = 0;
	for (size_t uiIndex = 0; uiIndex < uiSize; uiIndex++)
	{
		
		iResult = iResult + *piTemp;
		piTemp++;
	
	}

	return EXIT_SUCCESS;
}

int main()
{
	int aiValue[] = {1, 2, 3, 4};

	cout << "The following are sum of the array by three way:" << endl;
	cout << "By range:" << endl;

	int iResult = 0;
	int iRet = 0;
	iRet = CountByRange(aiValue, aiValue + sizeof(aiValue) / sizeof(int), iResult);
	if (iRet == EXIT_FAILURE)
	{
		cout << "Function failed!" << endl;
		system("pause");
		return EXIT_FAILURE;
	}

	cout << "The sum of the array is: " << iResult << endl;

	cout << "By array and size:" << endl;
	iRet = CountByArraySize(aiValue, sizeof(aiValue) / sizeof(int), iResult);
	if (iRet == EXIT_FAILURE)
	{
		cout << "Function error!" << endl;
		system("pause");
		return EXIT_FAILURE;
	}

	cout << "The sum of the array is: " << iResult << endl;

	cout << "By pointer and size" << endl;
	iRet = CountByPointerSize(aiValue, sizeof(aiValue) / sizeof(int), iResult);
	if (iRet == EXIT_FAILURE)
	{
		cout << "Function error!" << endl;
		system("pause");
		return EXIT_FAILURE;
	}
	
	cout << "The sum of the array is: " << iResult << endl;

	system("pause");
	return EXIT_SUCCESS;
}
