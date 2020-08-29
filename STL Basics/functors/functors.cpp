#include <iostream>
using namespace std;

class myFloat{
	float ft;
public:
	myFloat() : ft(0.1) {}
	void getValue() {
		cout << "the value is " << ft << endl;
	}

	// Overloading the parenthesis
	void operator () (float value) {
		ft += value;
	}
};

int main() {
	// Funtors - Function Operators
	// overloading of () parenthesis

	myFloat floaty;
	floaty(2);
	floaty.getValue();

	return 0;
}