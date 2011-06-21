/*
 * Class Lorry
 *
 * @author Robert Kruszewski
 */
#include <iostream>
#include <string>
#include <sstream>
#include "Lorry.hpp"

using namespace std;

Lorry::Lorry(string regNo, int axles) : Vehicle(regNo) {
	this->axles = axles;   	
	this->type = "lorry";
	this->print_register();
}

void Lorry::charge() {
	this->recentFee = this->axles * Vehicle::rate;
	this->owes += this->recentFee;
}

string Lorry::get_id() {
	stringstream ss;
	ss << this->axles;
	return ss.str() + "-axle " + this->type;
}
