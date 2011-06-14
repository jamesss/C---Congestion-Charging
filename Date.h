#ifndef _DATE_HPP
#define _DATE_HPP

class Date{ 
	public:
		int year, month, day;
		void print();
		void next();
		Date(int, int, int);
		Date();
};

#endif
