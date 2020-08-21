#include <iostream>
using namespace std;

// Creating a add method to add multiple data types
// We can consider T as a empty data-type which
// can be implicitly used as any data type as required;
template <typename T>
T addme (T a, T b) {
	return a + b;
}
int main() {
	cout << addme(2, 3) << endl;
	cout << addme(5.7, 4.4) << endl;
	return 0;
}