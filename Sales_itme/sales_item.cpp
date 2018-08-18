#include "sales_item.h"

Sales_item::Sales_item(const string& book):book_no(book), units_sold(0),revenue(0.0)
{



}
Sales_item::Sales_item(istream & is)
{
	is >> *this;
}



Sales_item& Sales_item::operator +=(const Sales_item& s)
{
	this->units_sold += s.units_sold;
	this->revenue += s.revenue;
	return *this;
}
//得到订单号
string Sales_item::isbn() const
{
	return book_no;
}
//平均单价
double Sales_item::avg_price() const
{
	if (units_sold)
	{
		return revenue / units_sold;
	}
	else
		return 0;

}



istream& operator>>(istream &in, Sales_item& s)
{
	/*double price = 0.0;
	cout << "book_no:" << " " << "units_sold:" << " " << "price" << endl;
	in >> s.book_no >> s.units_sold >> price;
	if (in)
	{
		s.revenue = s.units_sold * price;
	}
	else
	{
		s = Sales_item();
	}*/
	//cout << "helloworld" << " " << L"1223" << endl;
	cout << \
		 "dfd";
	return in;
}



