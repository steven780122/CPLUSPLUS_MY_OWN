// 9_26DeleteEvenandOdd.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cstdlib>
#include <vector>
#include <list>
#include <iostream>

using namespace std;

int main()
{
	int aiValue[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};
	
	vector<int> ivecValue(aiValue, aiValue + sizeof(aiValue) / sizeof(int));
	list<int> ilistValue(aiValue, aiValue + sizeof(aiValue) / sizeof(int));

	/*cout << "The vector elements are as follows:" << endl;
	for (vector<int>::iterator iterIndex = ivecValue.begin(); iterIndex != ivecValue.end(); iterIndex++)
	{
		cout << *iterIndex << " ";
	}

	cout << "\nThe list elements are as follows:" << endl;
	for (list<int>::iterator iterIndex = ilistValue.begin(); iterIndex != ilistValue.end(); iterIndex++)
	{
		cout << *iterIndex << " ";
	}
*/ 
	/////////////////////////    �H�U���L�k����  ������ԣ@@!!!!!!!!!!!!!!
	
	for (vector<int>::iterator iterIndex = ivecValue.begin(); iterIndex != ivecValue.end(); iterIndex++)
	{
		if (*iterIndex % 2 == 0)
		{
			iterIndex = ivecValue.erase(iterIndex);	//�p�߰O�o�Niter���e�@��
			iterIndex--;
		}
	}

	cout << "The vector elements after deleting even number are as follows:" << endl;
	for (vector<int>::iterator iterIndex = ivecValue.begin(); iterIndex != ivecValue.end(); iterIndex++)
	{
		cout << *iterIndex << " ";
	}  

	//////////////
	for (list<int>::iterator iterIndex = ilistValue.begin(); iterIndex != ilistValue.end(); iterIndex++)
	{
		if (*iterIndex % 2 != 0)
		{
			iterIndex = ilistValue.erase(iterIndex);	//�p�߰O�o�Niter���e�@��
			iterIndex--;
		}
	}

	cout << "The vector elements after deleting even number are as follows:" << endl;
	for (list<int>::iterator iterIndex = ilistValue.begin(); iterIndex != ilistValue.end(); iterIndex++)
	{
		cout << *iterIndex << " ";
	}




	system("pause");
	return EXIT_SUCCESS;
}
