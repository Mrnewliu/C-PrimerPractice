//#pragma once
#ifndef __SALES_ITEM
#define __SALES_ITEM
#include<iostream>
#include<string>

using namespace std;





class Sales_item
{
public:
	//三个构造函数
	Sales_item() :  units_sold(0),revenue(0.0){ }
	Sales_item(const string& book);
	Sales_item(istream & is);
	//一个析构函数
	~Sales_item()
	{
	
	}

	//四个友元函数
	friend istream& operator>>(istream &in, Sales_item& s);
	
	friend ostream& operator<<(ostream &out, Sales_item& s)
	{

		out << s.book_no << " " << s.units_sold << " "  << s.avg_price();
		return out;
	}
	friend bool operator<(const Sales_item& s1, const Sales_item& s2)
	{
		

	}
	friend bool operator==(const Sales_item& s1, const Sales_item& s2)
	{
		if (s1.avg_price() == s2.avg_price() &&
			s1.book_no == s2.book_no &&
			s1.isbn() == s2.isbn())
		{
			return true;
		}
		else
		{
			return false;
		}


	}



public:
	//+= 操作符重载
	Sales_item& operator +=(const Sales_item&);
	//得到订单号
	string isbn() const;
	//平均单价
	double avg_price( ) const;




private:
	string book_no;
	unsigned units_sold;
	double revenue;

};



#endif

