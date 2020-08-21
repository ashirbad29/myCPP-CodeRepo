#include <iostream>
#include <string>
using namespace std;

class Men{
	string _name;
	int _age;
	Men(){}
protected:
	Men(const string & name, const int &age) : _name(name), _age(age) {}
	void run() { puts("i can run"); }
public:
	void sayName() const;
};

void Men::sayName() const {
	cout << "My name is " << _name << endl;
}

// superman
// Superman inheriting Men
class Superman : public Men {
	bool flight;
public:
	Superman(string name) : Men(name, 24) {}
	void run() { puts("I can run at light speed"); }
};

//Spiderman
// Spiderman inherting from Men
class Spiderman : public Men {
	bool webbing;
public:
	Spiderman(string name) : Men(name, 18) {}
	void run() { puts("I can run at normal coz im a spider!"); }
};

int main() {

	Superman clark("kent");
	clark.sayName();
	clark.run();

	Spiderman peter("peter");
	peter.sayName();
	peter.run();
	return 0;
}