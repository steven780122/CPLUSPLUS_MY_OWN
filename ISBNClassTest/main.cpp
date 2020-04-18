#include "Sales_Item.h"
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	Sales_Item Total, Trans;

	cout << "Enter some transaction (Ctrl + Z to end):" << endl;

	if (Total.Input(cin))
	{
		while (Trans.Input(cin))
		{
			if (Total.Same_Isbn(Trans))
			{
				Total.add(Trans);
			}
			else
			{
				Total.Output(cout) << endl;
				Total = Trans;
			}
		}
		
	}
	else
	{
		cout << "No data?" << endl;
		return EXIT_FAILURE;
	}

	return EXIT_SUCCESS;	
}