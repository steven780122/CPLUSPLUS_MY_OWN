// 7_14CountVector.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>
#include <iostream>
#include <vector>

using namespace std;

int ComputeVectorSum(vector<double>::iterator iterBegin, vector<double>::iterator iterEnd, double &dResult)
{
	while (iterBegin != iterEnd)
	{
		dResult = dResult + *iterBegin;
		iterBegin++;
	}

	return EXIT_SUCCESS;
}


int main()
{
	vector<double> ivecTemp;
	double dTemp = 0.0;

	cout << "Please enter some double to compute the sum: (Ctrl + Z to end)" << endl;

	while (cin >>dTemp)
	{
		ivecTemp.push_back(dTemp);
	}

	cout << "The double number you enter are as follows:" << endl;
	for (vector<double>::iterator iterIndex = ivecTemp.begin(); iterIndex != ivecTemp.end(); iterIndex++)
	{
		cout << *iterIndex <<" ";
	}

	

	int iRet = 0;
	double dResult = 0.0;
	iRet = ComputeVectorSum(ivecTemp.begin(), ivecTemp.end(), dResult);
	if (iRet == EXIT_FAILURE)
	{
		cout << "Function error!" << endl;
		system("pause");
		return EXIT_FAILURE;
	}

	cout << "\nThe sum of your input are : " << dResult << endl;

	system("pause");
	return EXIT_SUCCESS;
}