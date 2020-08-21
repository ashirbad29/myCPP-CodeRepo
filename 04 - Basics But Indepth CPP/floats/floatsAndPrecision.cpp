#include <iostream>
#include <cmath> // for floor(), ceil(), round(), trunc()
#include <float.h>
using namespace std;

int main() {
	cout << "float ranges from " << FLT_MIN << " TO " << FLT_MAX << endl;

	/*
		Take caution while using these!!!
		1. float
		2. Double
		3. long double
	*/
	cout << sizeof(float) * 8 << "bits" <<endl; // 32
	cout << sizeof(double) * 8 << "bits" <<endl; // 64
	cout << sizeof(long double) * 8 << "bits" <<endl; // 96

	float f = 2.03;
	float g = 2.44;
	cout << f + g << endl;
	printf("%.3f\n", f);

	if(f == 2.03) puts("great");
	else puts("not so great");

	// Importatn Methods
	// floor()
	cout << floor(2.2) << endl; // 2
	cout << floor(2.7) <<endl; // 2

	// ceil()
	cout << ceil(2.2) << endl; // 3

	// round()
	cout << round(2.2) << endl; // 2
	cout << round(2.6) << endl; // 3

	// trunc()
	// it removes the digit after decimal point
	cout << trunc(2.33) << endl; // 2
	cout << trunc(3.45) << endl; // 3
	return 0;
}