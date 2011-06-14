#include <iostream>
#include "Date.h"

using namespace std;

void Date::print( ) {
	cout.width(2);
	cout << day << "/" << month << "/" << year << endl; 
}

void Date::next(){
	day++;
	if (this->day==32)
		{day = 1; month++;};
	if ((*this).month == 13 )
		{month=1; year++;}; 
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
