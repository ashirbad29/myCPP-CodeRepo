#include <iostream>
using namespace std;

int main() {
	// lambdas are anonomoys function objects
	// This is a simple lambda function
	[]{
		cout << "hey there from lambdas\n";
	}();

	// Example 2 with return statement
	auto sum = [](auto a, auto b){
		return a + b;
	};
	cout << sum(2, 3) << endl;

	return 0;
}