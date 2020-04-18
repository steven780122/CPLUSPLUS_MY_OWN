// 9_39SentenceSearch.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include <cstdlib>
#include <vector>

using namespace  std;

int main()
{
	string strLine1 = "We were her pride of 10 she named us:";
	string strLine2 = "Benjamin, Phoenix, the Prodigal";
	string strLine3 = "and perspicacious pacific Suzanne.";
	string strSentence = strLine1 + ' ' + strLine2 + ' ' + strLine3;
	string strSeparator = " :.,\n\t\v\r\f";
	string strWord = "";

	string::size_type uiStartPos = 0, uiEndPos = 0, uiWordsNum = 0, uiStringLen = 0, uiMaxStringLen = 0, uiMinStringLen = 0;
	vector<string> strvecMaxString;
	vector<string> strvecMinString;
	
	cout << "The sentence is:\n" << strSentence;
	cout << "\n";
	while ((uiStartPos = strSentence.find_first_not_of(strSeparator, uiStartPos)) !=  string::npos) 
	{
		uiWordsNum++;
		uiEndPos = strSentence.find_first_of(strSeparator, uiStartPos);
		uiStringLen = uiEndPos - uiStartPos;
		strWord.assign(strSentence.begin() + uiStartPos, strSentence.begin() + uiStartPos + uiStringLen);
		cout << uiStringLen << " " << strWord << endl;
		
		if (uiWordsNum == 1)
		{
			uiMaxStringLen = uiStringLen;
			uiMinStringLen = uiStringLen;
			strvecMaxString.push_back(strWord);
			strvecMinString.push_back(strWord);
		}
		else
		{
			if (uiStringLen > uiMaxStringLen)
			{
				uiMaxStringLen = uiStringLen;
				strvecMaxString.clear();
				strvecMaxString.push_back(strWord);
			}

			if (uiStringLen == uiMaxStringLen)
			{
				strvecMaxString.push_back(strWord);
			}

			if (uiStringLen == uiMinStringLen)
			{
				strvecMinString.push_back(strWord);
			}

			if (uiStringLen < uiMinStringLen)
			{
				uiMinStringLen = uiStringLen;
				strvecMinString.clear();
				strvecMinString.push_back(strWord);
			}
		}		
		
		uiStartPos = uiEndPos + 1;   //to the next word
	}

	cout << "\nThe word of max length are as follows:" << endl;
	for (vector<string>::iterator iterstrIndex = strvecMaxString.begin(); iterstrIndex != strvecMaxString.end(); iterstrIndex++)
	{
		cout << *iterstrIndex << " ";
	}

	cout << "\nThe word of min length are as follows:" << endl;
	for (vector<string>::iterator iterstrIndex = strvecMinString.begin(); iterstrIndex != strvecMinString.end(); iterstrIndex++)
	{
		cout << *iterstrIndex << " ";
	}

	system("pause");
	return EXIT_SUCCESS;
}

