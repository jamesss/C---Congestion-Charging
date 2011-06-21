/*
 * Class Vehicle
 *
 * @author Robert Kruszewski
 */
#include <iostream>
#include <string>
#include <iomanip>
#include "Vehicle.hpp"

double Vehicle::rate = 1;

Vehicle::Vehicle( string regNo ) {
	this->goesFree = false;
	this->noAction = false;
	this->regNo = regNo;
	this->recentFee = 0;
	this->owes = 0;
}

void Vehicle::set_rate( double rate ) {
	Vehicle::rate = rate;
	Vehicle::print_rate();
}

void Vehicle::enter(Date date, int time) {
	if (date != this->lastCharged) {
		this->goesFree = false;
		this->noAction = false;
		this->lastCharged = date;
		this->lastChargedHour = time;
		charge();
	} else {
		this->noAction = true;
	}
	print_enter(date, time);
}

void Vehicle::print_rate() {
	cout << setprecision (2);
	cout << fixed;
	cout << "*** The council sets the basic unit charge to #" << Vehicle::rate << endl;
	cout << endl;
}

void Vehicle::print_enter(Date date, int time) {
	cout << setprecision (2);
	cout << fixed;
	cout << "*** The " << this->get_id() << " (" << this->regNo << ") enters on " << date << " at " << time << "h00 hours" << endl;
	print_charge();
}

void Vehicle::print_charge() {
	cout << "    ";
	if(this->goesFree) {
		cout << "The vehicle goes free (now owes #" << this->owes << ")" << endl;
	} else if(this->noAction) {
		cout << "The vehicle has already been charged today ; no action is taken" << endl;
	} else {
		cout << "The vehicle is charged #" << this->recentFee << " (now owes #" << this->owes << ")" << endl;
	}
	cout << endl;
}

void Vehicle::print_register() {
	cout << "*** A " << this->get_id() << " (" << this->regNo << ") has been registered" << endl; 
	cout << endl;
}

