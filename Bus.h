#ifndef _BUS_HPP
#define _BUS_HPP
#include <iostream>
#include <string>
#include "Vehicle.h"

using namespace std;

class Bus : public Vehicle {
	private:
		void print_board();
		void print_leave();
		int total_passengers;
		int last_passengers;
	public:
		Bus(string);
		void board(int);
		void leave(int);
		void charge();
		string get_id();
};

#endif
