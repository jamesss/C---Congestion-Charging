/*
 * Class DieselCar
 *
 * @author Robert Kruszewski
 */
#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include "DieselCar.hpp"

double DieselCar::limit = 5;

using namespace std;

DieselCar::DieselCar(string regNo, int emission) : Vehicle(regNo) {
	this->emission = emission;
	this->type = "diesel car";
	this->print_register();
}

void DieselCar::set_limit( double limit ) {
	DieselCar::limit = limit;
	DieselCar::print_limit();
}

void DieselCar::print_limit() {
	cout << "*** ";
	cout << setprecision (2);
	cout << fixed;
	cout << "The council says diesel cars with emissions less than "<<DieselCar::limit<<" ppcm";
	cout << endl << "    should pay a reduced rate" << endl;
	cout << endl;
}

void DieselCar::charge() {
	if(this->lastChargedHour < 9 || this->lastChargedHour > 18) {
		this->goesFree = true;
		this->recentFee = 0;
	} else {
		if(this->emission <= DieselCar::limit) {
			this->recentFee = Vehicle::rate;
		} else {
			this->recentFee = 3 * Vehicle::rate;
		}
			this->owes += this->recentFee;
	}
}

string DieselCar::get_id() {
	stringstream ss;
	ss << this->emission;
	return ss.str() + "-ppcm " + this->type;
}
