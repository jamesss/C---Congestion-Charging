/*
 * Class PetrolCar
 *
 * @author Robert Kruszewski
 */
#include <iostream>
#include <string>
#include "PetrolCar.hpp"

using namespace std;

PetrolCar::PetrolCar(string regNo) : Vehicle(regNo) {
	this->type = "petrol car";
	this->print_register();
}

void PetrolCar::charge() {
	if(this->lastChargedHour < 9 || this->lastChargedHour > 18) {
		this->goesFree = true;
		this->recentFee = 0;
	} else {
		this->recentFee = 2 * Vehicle::rate;
		this->owes += this->recentFee;
	}
}
