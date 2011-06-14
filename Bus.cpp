#include <iostream>
#include <string>
#include "Vehicle.h"

using namespace std;

Bus::Bus(string regno) {
	this->regno = regno;
}

void Bus::board(int passengers) {
	this->passengers = passengers;
}

int Bus::num_passengers() {
	return passengers;
}
