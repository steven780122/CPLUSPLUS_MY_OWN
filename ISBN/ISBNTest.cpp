#include <iostream>
#include <stdlib.h>
#include "Sales_item.h"

using namespace std;

int main()
{
	Sales_item total, trans;//, trans2;

	/*cin >> trans1 >> trans2;

	total = trans1 + trans2;

	cout << total << endl; */ 

	

	if (cin >> total)
	{
		while (cin >> trans)
		{
			if (total.same_isbn(trans))
			{
				total = total + trans;
			}
			else
			{
				cout << total << endl;
				total = trans;
			}

			cout << total << endl;
		}
	}
	else
	{
		cout << "No Data??" << endl;
		return EXIT_FAILURE;
	}  

	system("pause");
	return EXIT_SUCCESS;
}