#include <iostream>
#include <fstream>
#include <string>
#include "Vehicle.h"
#include "Bus.h"

using namespace std;

Bus::Bus(string regNo) : Vehicle(regNo) {
	this->total_passengers = 0;
	this->last_passengers = 0;
	this->print_register();
}

void Bus::board(int passengers) {
	this->last_passengers = passengers;
	this->total_passengers += passengers;
	this->print_board();
}

void Bus::leave(int passengers) {
	this->last_passengers = passengers;
	this->total_passengers -= passengers;
	this->print_leave();
}

void Bus::print_board() {
	cout<<this->last_passengers<<" passengers board the bus ("<<this->regNo<<"), so "<<this->total_passengers<<" passengers are on board"<<endl;
}

void Bus::print_leave() {
	cout<<this->last_passengers<<" passengers leave the bus ("<<this->regNo<<"), so "<<this->total_passengers<<" passengers are on board"<<endl;
}

void Bus::charge() {
	if( this->total_passengers >= 20 ) {
		this->goesFree = true;
	} else {
		//this->wasCharged = true;
		this->recentFee = Vehicle::rate * 5;
		this->owes += this->recentFee;
	}	
}

string Bus::get_id() {
	return "bus";
}

