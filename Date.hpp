/*
 * Class header Date
 *
 * @author Robert Kruszewski
 */
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
		bool operator==(const Date&);
		bool operator!=(const Date&);
    	friend ostream& operator<<(ostream& os, const Date& d);	
		
		int year, month, day;
};

#endif
