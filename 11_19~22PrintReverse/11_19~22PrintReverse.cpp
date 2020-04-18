// 11_19~22PrintReverse.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <vector>
#include <iostream>
#include <cstdlib>

using namespace std;

typedef enum E_Option
{
	ePrintNormal = 1,
	ePrintReverseByNormalIterator,
	ePrintReverseByReverseIterator,
	ePrintReverseBetween3rdTo7th,
	eLeave
} EOption;

void ShowMenu()
{
	cout << endl;
	cout << "(" << ePrintNormal << "). Print numbers in normal order." << endl;
	cout << "(" << ePrintReverseByNormalIterator << "). Print reverse numbers by normal iterator." << endl;
	cout << "(" << ePrintReverseByReverseIterator << "). Print reverse numbers by reverse iterator." << endl;
	cout << "(" << ePrintReverseBetween3rdTo7th << "). Print 3re to 7th Numbers in reverse order in to list." << endl;
	cout << "(" << eLeave << "). Leave!" << endl;
}

int PrintNormal(vector<int>& ivecNumber )
{
	if (!&ivecNumber)   //���T�w�g�k
	{
		cout << "Vector parameter error!" << endl;
		return EXIT_SUCCESS;
	}

	for (vector<int>::iterator iterIndex = ivecNumber.begin(); iterIndex != ivecNumber.end(); iterIndex++)
	{
		cout << *iterIndex << " ";
	}

	cout << endl;

	return EXIT_SUCCESS;
}

int PrintReverseByNormalIterator(vector<int>& ivecNumber)
{
	if (!&ivecNumber)
	{
		cout << "Vector parameter error!" << endl;
		return EXIT_FAILURE;
	}

	vector<int>::iterator iterIndex;

	iterIndex = ivecNumber.end();
	iterIndex--;

	while (iterIndex > ivecNumber.begin())   //��begin�p���X   //�A��s��bug
	{
		cout << *iterIndex << " ";
		--iterIndex;
	}

	iterIndex++;

	cout << endl;

/*	
	for (vector<int>::iterator iterIndex = ivecNumber.end() - 1; iterIndex != ivecNumber.begin(); iterIndex--)   //�p��end�O���V�̫ᤸ�����U�@��!!��begin�O�Ĥ@��,�ҥH���y��for
	{
		cout << *iterIndex << " ";
	}  */ 

	return EXIT_SUCCESS;
}

int main()
{
	vector<int> ivecInterger;
	
	int iTempInteger = 0;
	cout << "Please enter some integers: (Ctrl + Z to end)" << endl;
	while (cin >> iTempInteger)
	{
		ivecInterger.push_back(iTempInteger);
	}
	
	cin.clear();
	
	bool bFlag = false;
	
	while (bFlag == false)
	{
		int iRet = 0;

		ShowMenu();	
		cout << "Please enter your option:" << endl;
		int iOption = 0;
		cin >> iOption;

		cin.clear();
		switch (iOption)
		{
		case ePrintNormal:
			iRet = PrintNormal(ivecInterger);
			if (iRet == EXIT_FAILURE)
			{
				continue;
			}
			break;

		case ePrintReverseByNormalIterator:
			iRet = PrintReverseByNormalIterator(ivecInterger);
			if (iRet == EXIT_FAILURE)
			{
				continue;
			}
			break;

		case ePrintReverseByReverseIterator:    //����
			break;

		case ePrintReverseBetween3rdTo7th:		//����
			break;




		case eLeave:
			bFlag = true;
			break;

		default:
			break;
		}




	}



	system("pause");
	return EXIT_SUCCESS;

}

