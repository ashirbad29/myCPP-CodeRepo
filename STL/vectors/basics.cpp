#include <iostream>
#include <vector>
#include <algorithm>
#define NEWLINE cout << "\n"
using namespace std;

struct Corners{
	float a, b, c, d;
};

// Overloading the << operator for Corners

ostream& operator<<(ostream& stream, Corners& corner) {
	stream << corner.a << " " << corner.b << " " << corner.c << " " << corner.d;
	return stream;
}

int main() {

	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);

	for (int i : v) {
		cout << i << " ";
	}
	cout << "\n";
	for(auto i = v.begin(); i != v.end(); ++i) {
		cout << *i << " ";
	}

	cout << endl;

	// storing struct using vector
	vector<Corners> corners;

	corners.push_back({1, 2, 3, 4});
	corners.push_back({5, 6, 7, 8});

	for (int i = 0; i < corners.size(); ++i) {
		cout << corners[i] << " ";
	}

	// sorting the vector in descending order
	// using lambda expression
	sort(v.begin(), v.end(), [](int a, int b){
		return a > b;
	});

	NEWLINE;

	for (int i : v) {
		cout << i << " ";
	}

	NEWLINE;
	return 0;
}