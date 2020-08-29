#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;

void permute(char a[], int i, set<string> &s) {
	if (a[i]=='\0') {
		string t(a);
		s.insert(t);
		return;
	}
	// recursive case
	for (int j=i; a[j]!='\0'; j++) {
		swap(a[i], a[j]);
		permute(a, i+1, s);
		swap(a[i], a[j]);
	}
}

int main() {
	set<string> s;
	char str[] = "abc";
	permute(str, 0, s);

	for (auto x: s) {
		cout << x << endl;
	}
	return 0;
}