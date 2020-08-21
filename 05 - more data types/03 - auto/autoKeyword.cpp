#include <iostream>
using namespace std;

string api_call() {
	return "get some data from api";
}

int main() {
	// if we dont know what type of data will be returned
	// will use auto

	auto response = api_call();
	cout << response << endl;
	return 0;
}