#include <iostream>
#include <string>
#include "Vehicle.h"

using namespace std;

class Bus : public Vehicle {
	private:
		int passengers;
	public:
		Bus(string);
		void board(int);
		int num_passengers();
};
