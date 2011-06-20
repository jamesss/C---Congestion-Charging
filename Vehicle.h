#ifndef _VEHICLE_HPP
#define _VEHICLE_HPP
#include <iostream>
#include <string>
#include "Date.h"

using namespace std;

class Vehicle {
	public:
		Vehicle(string);
		static void set_rate(double);
		void enter(Date,int);
		virtual	void charge() = 0;
		static void print_rate();
		void print_charge();
		void print_register();
		void print_enter(Date, int);
		virtual string get_id() = 0;
	protected:
		string type;
		string regNo;
		Date lastCharged;
		int lastChargedHour;
		//bool wasCharged;
		bool goesFree;
		bool noAction;
		double recentFee;
		double owes;
		static double rate;
};

#endif
