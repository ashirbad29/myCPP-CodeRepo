#include <iostream>
using namespace std;

class One {
public:
	virtual void intro() {
		puts("I am one");
	}
};

class Two : public One {
public:
	void intro() {
		puts("I am Two");
	}
};

class Three : public One {
public:
	void intro() {
		puts("I am Three");
	}
};

int main() {
	/*
		Polymorphism means many forms
		a method can behave diffently in different context
	*/

	One *a;
	Two b;
	Three c;

	// a.intro();
	// b.intro();
	// c.intro();

	// in these case virtual function kicks in...
	a = &b;
	a->intro();

	a = &c;
	a->intro();
	return 0;
}