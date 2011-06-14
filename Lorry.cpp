#include <iostream>
#include <string>
#include "Lorry.h"

using namespace std;

Lorry::Lorry(string regno, int wheels) {
	this->regno = regno;
	this->wheels = wheels;
}

int Lorry::num_wheels() {
	return wheels;
}
