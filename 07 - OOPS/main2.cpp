#include <iostream>
#include <string>
using namespace std;

class Phone{
	string _name = "";
	string _os = "";
	int _price = 0;
public:
	Phone(); // Default constructor
	Phone(const string &name, const string &os, const int &price); // parameterized constructor
	Phone(const Phone & values); //copy constructor

	string getName() { return _name; }

	~Phone(); // Destructor
};
	
// constructors did't have any return type
Phone::Phone() : _name(), _os(), _price() {
puts("Default constructor");
}

// parameterized constructor
Phone::Phone(const string &name, const string &os, const int &price) : _name(name), _os(os), _price(price) {
	puts("This is parameterized constructor");
}

// Copy constructor
Phone::Phone(const Phone & values) {
	puts("copy constructor");
	_name = "Skinned" + values._name;
	_os = values._os;
	_price = values._price;
}

// Destructor
Phone::~Phone() {
	puts("Destructor is called");
}
int main() {

	Phone samsung;
	cout << samsung.getName() << endl; // empty string

	Phone onePlus8("onePlus8", "oxygenOS", 7999);
	cout << onePlus8.getName() << endl;

	Phone nokia = onePlus8;
	cout << nokia.getName() << endl;

	return 0;
}