// 11_18FileIterator.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <iterator>
#include <algorithm>


using namespace std;

int main()
{
	ofstream oddFile("oddfile.dat");
	ofstream evenFile("evenfile.dat");

	if (!oddFile || !evenFile)
	{
		cout << "Can't open output file!" << endl;
		return EXIT_FAILURE;
	}

	cout << "Please enter some integers.(Ctrl + Z to end)" << endl;

	istream_iterator<int> inFile(cin), eof;
	ostream_iterator<int> outOddfile(oddFile, " ");
	ostream_iterator<int> outEvenfile(evenFile, "\n");

	while (inFile != eof)
	{
		if (*inFile % 2 != 0)
		{ 
			*outOddfile = *inFile;
			outOddfile++;
		}
		else
		{
			*outEvenfile = *inFile;
			outEvenfile++;
		}
		
		inFile++;
	}

	oddFile.close();
	evenFile.close();

	system("pause");
	return EXIT_SUCCESS;
}