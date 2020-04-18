// 12_3ClassTest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cstdlib>



int main()
{
	class CPerson 
	{

	public:
		CPerson(const std::string &nm, const std::string &addr):
		  strName(nm), strAddress(addr)
		{

		}

	  std::string GetName() const
	  {
		  return strName;
	  }

	  std::string GetAddress() const
	  {
		  return strAddress; 
	  }

	private:
		std::string strName;
		std::string strAddress;

	};

	class CScreen
	{
	public:
		typedef std::string::size_type Index;
		char get() const {return strContents[uiCursor]}
		
	private:
		std::string strContents;
		Index uiCursor;
		Index uiWidth;

	};




	class CSales_Item 
	{
	public:
		double CSales_Item::Avg_Price() const
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
	private:

		std::string strIsbn;
		unsigned int uiSoldNumbers;
		double dRevenue;
	};











}