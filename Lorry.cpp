#include <iostream>
#include <string>
#include <sstream>
#include "Lorry.h"
#include "Date.h"

using namespace std;

Lorry::Lorry(string regNo, int axles) : Vehicle(regNo) {
	this->axles = axles;   	
	this->print_register();
}

void Lorry::charge() {
	this->recentFee = this->axles * Vehicle::rate;
	this->owes += this->recentFee;
	//this->wasCharged = true;
}

string Lorry::get_id() {
	stringstream ss;//create a stringstream
	ss << this->axles;//add number to the stream
	return ss.str() + "-axle lorry";
}
