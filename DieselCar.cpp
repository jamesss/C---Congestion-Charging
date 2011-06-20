#include <iostream>
#include <string>
#include <sstream>
#include "DieselCar.h"
#include "Date.h"

double DieselCar::limit = 5;

using namespace std;

DieselCar::DieselCar(string regNo, int emission) : Vehicle(regNo) {
	this->emission = emission;
	this->print_register();
}

void DieselCar::set_limit( double limit ) {
	DieselCar::limit = limit;
	DieselCar::print_limit();
}

void DieselCar::print_limit() {
	cout<<"The council says diesel cars with emissions less than "<<DieselCar::limit<<" ppcm should pay a reduced rate"<<endl;
}

void DieselCar::charge() {
	if(this->lastChargedHour < 9 || this->lastChargedHour > 18) {
		//this->wasCharged = false;
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
	stringstream ss;//create a stringstream
	ss << this->emission;//add number to the stream
	return ss.str() + "-ppcm diesel car";
}
