/*
 * Class header DieselCar
 *
 * @author Robert Kruszewski
 */
#include <iostream>
#include <string>
#include "Vehicle.hpp"

using namespace std;

class DieselCar : public Vehicle {
	public:
		DieselCar(string, int);
		~DieselCar(){};

		static void set_limit(double);	
		static void print_limit();
		
		string get_id();
		void charge();
		
		static double limit;
		int emission;
};
