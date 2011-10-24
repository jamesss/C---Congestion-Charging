#include <iostream>
#include <fstream>
#include "Date.h"

using namespace std;

int main() {
	Date d1 = Date(25,12,2011);
	Date d2 = Date(25,12,2011);
	if (d1 == d2) {
		cout << "Equal!" << endl;
	} else {
		cout << "Not Equal." << endl;
	}
	d2.next();
	//d2.print();
	if (d1 != d2) {
		cout << "Not Equal!" << endl;
	} else {
		cout << "Equal." << endl;
	}
	return 0;
}
