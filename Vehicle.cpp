#include <iostream>
#include <string>
#include "Vehicle.h"

void Vehicle::enter(Date date, int time) {
	if (date != lastcharged) {
		lastcharged = date;
		charge();
	}
	inzone = true;
}

void Vehicle::leave(Date date, int time) {
	inzone = false;
}
