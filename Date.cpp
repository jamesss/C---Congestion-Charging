#include <iostream>
#include <fstream>
#include "Date.h"

using namespace std;

void Date::print( ) {
	cout.width(2);
	cout << day << "/" << month << "/" << year << endl; 
}

ostream & operator<<(ostream& os, const Date & d) {
	os.width(2);
	os << d.day << "/" << d.month << "/" << d.year << endl; 
	return os;
}

void Date::next(){
	day++;
	if (this->day==32)
		{day = 1; month++;};
	if ((*this).month == 13 )
		{month=1; year++;}; 
}

int Date::get_year() {
	return year;
}

int Date::get_month() {
	return month;
}

int Date::get_day() {
	return day;
}

bool Date::operator==(Date d) {
	if (d.get_year() == this->year) {
		if (d.get_month() == this->month) {
			if (d.get_day() == this->day) {
				return true;
			}
		}
	}
	return false;
}

bool Date::operator!=(Date d) { 
	if (d.get_year() == this->year) {
		if (d.get_month() == this->month) {
			if (d.get_day() == this->day) {
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
