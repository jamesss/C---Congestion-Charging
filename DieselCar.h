#include <iostream>
#include <string>
#include "Vehicle.h"

using namespace std;

class DieselCar : public Vehicle {
	public:
		DieselCar(string, int);
		static void set_limit(double);	
		static void print_limit();
		string get_id();
		void charge();
		static double limit;
		int emission;
};
