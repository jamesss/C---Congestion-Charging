/*
 * Class header Lorry
 *
 * @author Robert Kruszewski
 */
#ifndef _LORRY_HPP
#define _LORRY_HPP
#include <iostream>
#include <string>
#include "Vehicle.hpp"

using namespace std;

class Lorry : public Vehicle {
	private:
		int axles;

	public:
		Lorry(string,int);
		~Lorry(){};

		void charge();
		string get_id();
};

#endif
