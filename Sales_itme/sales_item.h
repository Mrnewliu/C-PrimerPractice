//#pragma once
#ifndef __SALES_ITEM
#define __SALES_ITEM
#include<iostream>
#include<string>

using namespace std;





class Sales_item
{
public:
	//�������캯��
	Sales_item() :  units_sold(0),revenue(0.0){ }
	Sales_item(const string& book);
	Sales_item(istream & is);
	//һ����������
	~Sales_item()
	{
	
	}

	//�ĸ���Ԫ����
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
	//+= ����������
	Sales_item& operator +=(const Sales_item&);
	//�õ�������
	string isbn() const;
	//ƽ������
	double avg_price( ) const;




private:
	string book_no;
	unsigned units_sold;
	double revenue;

};



#endif

