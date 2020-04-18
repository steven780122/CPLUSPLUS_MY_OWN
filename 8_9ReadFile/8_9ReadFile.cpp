// 8_9ReadFile.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cstdlib>
#include <string>
#include <vector>
#include <iostream>
#include <fstream>

using namespace std;

int FileToVector(string strFileName, vector<string>& svecTemp)
{
	ifstream inFile(strFileName.c_str());
	if (!inFile)
	{
		return 1;
	}

	string strTemp;
	while (getline(inFile, strTemp))
	{
		svecTemp.push_back(strTemp);
	}

	inFile.close();
	if (inFile.eof())    //遇到文件結束
	{
		return 4;
	}
	if (inFile.bad())
	{
		return 2;	//發生系統級故障 
	}
	if (inFile.fail())
	{
		return 3;	//讀取失敗
	}

	return EXIT_SUCCESS;
}


int main()
{
	vector<string> svecTemp;
	string strFileName = "";

	cout << "Enter File name:" << endl;
	cin >> strFileName;

	switch (FileToVector(strFileName, svecTemp))
	{
	case 1:
		cout << "Can't open file." << endl; 
		break;
	
	case 2:
		cout << "System error!" << endl;
		break;
	
	case 3:
		cout << "Read failure!" << endl;
		break;
	}

	cout << "The vector is:" << endl;
	for (vector<string>::iterator iter = svecTemp.begin(); iter != svecTemp.end(); iter++)
	{
		cout << *iter << " ";
	}




	system("pause");
	return EXIT_SUCCESS;

}
