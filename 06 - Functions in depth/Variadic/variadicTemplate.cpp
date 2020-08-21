#include <iostream>
using namespace std;

template <typename T>
void printAll(T t) {
	cout << "Single arg func: " << t << endl;
}

// this is a variadic template function
template <typename T, typename... args> 
void printAll(T t, args... arg) {
	cout << "Multiple arg func: " << t << endl;
	printAll(arg...);
}

int main() {
	/*
		Variadic function templates are functions
		which can take multiple number of arguments
	*/
	printAll(1, 3.4, "ashirbad");

	return 0;

}