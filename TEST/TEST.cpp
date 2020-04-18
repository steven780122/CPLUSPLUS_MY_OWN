// TEST.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>;

using namespace std;



class T {

public:

	T() { cout << "constructor" << endl; }

	~T() { cout << "destructor" << endl; }

};



int main()

{

	const int NUM = 3;



	T* p1 = new T[NUM];

	cout << hex << p1 << endl;

	//  delete[] p1;

	delete p1;



	T* p2 = new T[NUM];

	cout << p2 << endl;

	delete[] p2;

}
