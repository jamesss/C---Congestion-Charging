#ifndef _LORRY_HPP
#define _LORRY_HPP
#include <iostream>
#include <string>
#include "Vehicle.h"

using namespace std;

class Lorry : public Vehicle {
	private:
		int axles;
	public:
		Lorry(string,int);
		void charge();
		string get_id();
};

#endif
