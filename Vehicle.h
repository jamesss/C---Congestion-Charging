#include <iostream>
#include <string>

using namespace std;

class Vehicle {
	public:
		static void set_rate();
		void enter(Date,int);
		void leave(Date,int);
		virtual string type() = 0;
	protected:
		string regno;
		static rate;

};
