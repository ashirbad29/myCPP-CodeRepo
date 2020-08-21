#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 	Comparator function for lower bound
bool compare (int a, int b) {
	return a <= b;
}

int main() {
	vector<int> currency = {1, 2, 5, 10, 20, 50, 100, 200, 500, 2000};
	int n = currency.size();
	int money = 179;
	// we have to find the change for the money
	while (money > 0) {
		// lb wil get the index here
		int lb = lower_bound(currency.begin(), currency.end(), money, compare) - currency.begin() - 1;
		int change = currency[lb];
		cout << change << " ";
		money -= change;
	}
	return 0;
}