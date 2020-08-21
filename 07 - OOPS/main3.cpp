#include <iostream>
using namespace std;

class Rectangel{
	int _length;
	int _breadth;
public:
	Rectangel(int lenght, int breadth) {
		_length = lenght;
		_breadth = breadth;
	}
	int Area() {
		return _length * _breadth; 
	}

	bool compare(Rectangel rectangel) {
		return this->Area() > rectangel.Area();
	}
};

int main() {
	Rectangel R1(3, 3);
	Rectangel R2(4, 4);

	cout << R1.compare(R2) << endl;
	return 0;
}