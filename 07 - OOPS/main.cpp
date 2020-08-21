#include <iostream>
#include <string>
using namespace std;

class Person {
	// data members
	int _secreat = 69;
public:
	string name = "default";
	void printUser() {
		cout << "User name is: " << name << endl;
	}

	void setSecreat(const int &newSecreat) {
		_secreat = newSecreat;
	}

	// const member function
	/*
		The idea of const function is not to allow them to modify
		the object on which they are called.
	*/
	int getSecreat() const {
		return _secreat;
	}
};

int main() {
	Person ashirbad;
	ashirbad.name = "ashirbad";
	ashirbad.printUser();

	Person dhanyabad;
	dhanyabad.printUser();
	dhanyabad.setSecreat(6969);
	cout << dhanyabad.getSecreat() << endl;

	//an object declared as const canot be modified and hence,
	// can evoke only const member functions ad these functions ensure
	// not to modify the object;
	const Person raju;
	cout << raju.getSecreat() << endl;
	return 0;
}