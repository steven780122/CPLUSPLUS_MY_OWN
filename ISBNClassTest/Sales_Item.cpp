#include "Sales_Item.h"

std::istream& Sales_Item::Input(std::istream &in)
{
	double dPrice = 0.0;

	in >> strIsbn >> uiSoldNumbers >> dPrice;

	if (in)
	{
		dRevenue = uiSoldNumbers * dPrice;
	}
	else
	{
		uiSoldNumbers = 0;
		dRevenue = 0.0;
	}

	return in;
}

std::ostream& Sales_Item::Output(std::ostream& out) const
{
	out << strIsbn << "\t" << uiSoldNumbers << "\t\t" << dRevenue << "\t\t" << Average_Price();
	return out;
}

double Sales_Item::Average_Price() const
{
	if (uiSoldNumbers)
	{
		return dRevenue / uiSoldNumbers;
	}
	else
	{
		return 0;
	}
}

Sales_Item Sales_Item::add(Sales_Item& other)
{
	dRevenue = dRevenue + other.dRevenue;
	uiSoldNumbers = uiSoldNumbers + other.uiSoldNumbers;
	return *this;
}