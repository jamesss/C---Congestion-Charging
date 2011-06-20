#include <iostream>
#include <string>
#include "PetrolCar.h"
#include "Date.h"

using namespace std;

PetrolCar::PetrolCar(string regNo) : Vehicle(regNo) {
	this->print_register();
}

void PetrolCar::charge() {
	if(this->lastChargedHour < 9 || this->lastChargedHour > 18) {
		//this->wasCharged = false;
		this->goesFree = true;
		this->recentFee = 0;
	} else {
		this->recentFee = 2 * Vehicle::rate;
		this->owes += this->recentFee;
	}
}

string PetrolCar::get_id() {
	return "petrol car";
}
