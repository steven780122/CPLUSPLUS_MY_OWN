#ifndef SALESITEM_H
#define SALESITEM_H

#include <iostream>
#include <string>

class Sales_Item
{
public:
	Sales_Item add(Sales_Item& Other);

public:
	std::istream& Input(std::istream& in);
	std::ostream& Output(std::ostream& out) const;
	double Average_Price() const;

	bool Same_Isbn(const Sales_Item &rhs) const
	{
		return strIsbn == rhs.strIsbn;
	}

	Sales_Item::Sales_Item():  uiSoldNumbers(0), dRevenue(0.0) {}     //default value

private:
	std::string strIsbn;
	unsigned int uiSoldNumbers;
	double dRevenue;
};

#endif