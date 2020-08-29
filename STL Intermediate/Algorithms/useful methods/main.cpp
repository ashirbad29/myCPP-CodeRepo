#include<bits/stdc++.h>
using namespace std;

#define ll              long long
#define pb              push_back
#define vi              vector<int>
#define ps(x,y)         fixed<<setprecision(y)<<x
#define w(x)            int x; cin>>x; while(x--)

void c_p_p()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}

int32_t main()
{
	c_p_p();

	// Rotate method
	vi v = {1, 3, 5, 7, 8};
	rotate (v.begin(), v.begin() + 4, v.end());
	for(int x: v) {
		cout << x << " ";
	}
	cout << "\n";

	// swap method
	vi s = {3, 4, 5};
	swap(s[0], s[2]);
	for(int x: s){
		cout << x << " "; // 5 4 3
	}
	cout << endl;

	// reverse method
	// reversing a list
	vi l = {1, 2, 3, 4, 5, 6};
	reverse(l.begin(), l.end());
	for (int x: l) {
		cout << x << " ";
	}
	return 0;
}