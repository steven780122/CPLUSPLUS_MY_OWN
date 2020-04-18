// 1_10_11CountSum.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

typedef int BOOL;

#define TRUE	1
#define FALSE	0
#define FOR_MIN_NUM		50
#define FOR_MAX_NUM		100
#define WHILE_MIN_NUM	0
#define WHILE_MAX_NUM	10

using namespace std;

typedef enum E_Menu
{
	eCountByFor = 1,
	eCountByWhile,
	eLeave
} EMenu;

void ShowMenu()
{
	cout << "(" << eCountByFor << "). " << "Show result by FOR between " << FOR_MIN_NUM << " ~ " << FOR_MAX_NUM << endl; 
	cout << "(" << eCountByWhile << "). " << "Show result by WHILE between " << WHILE_MIN_NUM << " ~ " << WHILE_MAX_NUM << endl;
	cout << "Please enter your choice" << endl;
}

void



int main()
{
	BOOL bFlag = FALSE;
	int iChoice = 0;

	while (bFlag == FALSE)
	{
		ShowMenu();

		cin >> iChoice;

		switch (iChoice)
		{
		case eCountByFor:
			break;

		case eCountByWhile:
			break;

		case eLeave:
			bFlag = TRUE;
			break;
		}

	}

	system("pause");
	return EXIT_SUCCESS;

}