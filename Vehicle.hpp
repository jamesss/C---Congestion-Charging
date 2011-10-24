/*
 * Class header Vehicle
 *
 * @author Robert Kruszewski
 */
#ifndef _VEHICLE_HPP
#define _VEHICLE_HPP
#include <iostream>
#include <string>
#include "Date.hpp"

using namespace std;

class Vehicle {
	protected:
		string type;
		string regNo;
		Date lastCharged;
		int lastChargedHour;
		bool goesFree;
		bool noAction;
		double recentFee;
		double owes;

		static double rate;

	public:
		Vehicle(string);
		~Vehicle(){};

		void print_charge();
		void print_register();
		void print_enter(Date, int);
		void enter(Date,int);
		
		virtual string get_id();
		virtual	void charge() = 0;
		
		static void set_rate(double);
		static void print_rate();
};

#endif
