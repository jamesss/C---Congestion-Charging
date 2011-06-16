#include <iostream>
#include <string>
#include "Date.h"

using namespace std;

class Vehicle {
	public:
		static void set_rate();
		void enter(Date,int);
		void leave(Date,int);
		int get_charge();
		virtual string type() = 0;
	protected:
		string regno;
		int charge;
		Date lastcharged;
		bool inzone;
		static int rate;

};
