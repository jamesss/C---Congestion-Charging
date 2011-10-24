/*
 * Class Date
 *
 * @author James Simpson
 * @author Robert Kruszewski
 */
#include <iostream>
#include <fstream>
#include <iomanip>
#include "Date.hpp"

using namespace std;

void Date::print( ) {
	cout.width(2);
	cout << day << "/" << month << "/" << year << endl; 
}

ostream & operator<<(ostream& os, const Date & d) {
	os.width(2);
	os.fill('0');
	os << d.day << "/";
	os.width(2);
   	os << d.month << "/" << d.year; 
	return os;
}

void Date::next(){
	day++;
	if (this->day==32)
		{day = 1; month++;};
	if ((*this).month == 13 )
		{month=1; year++;}; 
}

bool Date::operator==(const Date& d) {
	if (d.year == this->year) {
		if (d.month == this->month) {
			if (d.day == this->day) {
				return true;
			}
		}
	}
	return false;
}

bool Date::operator!=(const Date& d) { 
	if (d.year == this->year) {
		if (d.month == this->month) {
			if (d.day == this->day) {
				return false;
			}
		}
	}
	return true;
}

Date::Date(int d, int m, int y){ 
	if ( d<1 || d>31 )
		{cout << d << " illegal day "; d=1;};
	if ( m<1 || m>12 )
		{cout << m << " illegal month "; m=1;};
	if (y<1900 || y>3000) 
		{cout << y << " illegal year "; y=2000;};
	day = d; month = m; year = y; 
}

Date::Date() {
}
