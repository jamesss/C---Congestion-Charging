#ifndef _DATE_HPP
#define _DATE_HPP
#include <iostream>
#include <fstream>

using namespace std;

class Date{ 
	public:
		void print();
		void next();
		Date(int, int, int);
		Date();
		int get_year();
		int get_month();
		int get_day();
		bool operator==(Date);
		bool operator!=(Date);
    	friend ostream& operator<<(ostream& os, const Date& d);	
	private:
		int year, month, day;
};

#endif
