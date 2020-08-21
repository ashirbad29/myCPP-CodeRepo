#include <iostream>
using namespace std;

// passing life as reference to the function
void lifeUp(int &life) {
	++life;
}

int main() {
	int life = 3;
	cout << life << endl;
	lifeUp(life);
	cout << life << endl;
	return 0;
}