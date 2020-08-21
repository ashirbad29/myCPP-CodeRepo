#include<iostream>
using namespace std;

int main() {

	int myVar = 90;

	// Declaring a pointer
	int *myPtr;

	// Pointer is a variable which stores address of a variable
	// Pointer only stores memory address
	myPtr = &myVar; // Dont have to use the * here, it was only req while declaration

	printf("memory address stored in myPtr is: %p\n", myPtr);
	cout << myPtr << endl;

	// Dereferencing
	// It will return the value stored in the memory address
	// * will be used here for dereferencing.
	cout << *myPtr << endl; 

	return 0;
}