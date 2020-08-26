#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int> a = {1, 4, 5, 4, 5, 1, 9, 7, 9};
	// if except a single no all others occurs twice find the unique one
	int ans = 0;
	for(int i = 0; i < a.size(); i++) {
		ans ^= a[i];
	}

	cout << ans << endl;
	return 0;
}