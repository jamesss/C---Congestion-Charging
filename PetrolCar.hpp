/*
 * Class header PetrolCar
 *
 * @author Robert Kruszewski
 */
#include <iostream>
#include <string>
#include "Vehicle.hpp"

using namespace std;

class PetrolCar : public Vehicle {
	public:
		PetrolCar(string);
		~PetrolCar(){};
		
		void charge();
		string get_id();	
};
