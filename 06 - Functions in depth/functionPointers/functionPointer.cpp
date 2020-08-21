#include <iostream>
using namespace std;

void printSomething() {
	puts("printing something");
}

int main() {
	// creating a pointer to function
	// This is the weired syntax will use
	void (*PoniterToFunction)() = printSomething; 
	// () are not used here because it will call the function right here

	// 1st method
	PoniterToFunction();

	// 2nd method
	(*PoniterToFunction)();

	// these two are exactely same
	return 0;
}