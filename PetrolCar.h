#include <iostream>
#include <string>
#include "Vehicle.h"

using namespace std;

class PetrolCar : public Vehicle {
	public:
		PetrolCar(string);
		void charge();
		string get_id();	
};
