#include <iostream>
#include <string>
#include "Vehicle.h"

using namespace std;

class Lorry : public Vehicle {
	private:
		int wheels;
	public:
		Lorry(string,int);
	protected:
		int num_wheels();
};

