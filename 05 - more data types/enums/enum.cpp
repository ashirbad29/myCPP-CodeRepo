#include <iostream>
using namespace std;
#define PI 3.14; // this is a preprocessor constant

// enums
enum myEnums {
	AGE = 18,
	SALARY = 10000
};
/*
	enums are userdefined data types that consists of integral
	constants.
	enums are list of constants
*/
int main() {
	int mySalary = SALARY;
	cout << mySalary << endl;

	return 0;
}