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
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
}

bool compare(pair<int, int> p1, pair<int, int> p2) {
	int d1 = p1.first*p1.first + p1.second*p1.second;
	int d2 = p2.first*p2.first + p2.second*p2.second;

	if (d1 == d2) {
		// sort on basis on x coordinates
		return p1.first < p2.first;
	}

	return d1 < d2;
}

int32_t main()
{
	c_p_p();
	int n;
	cin >> n;
	vector<pair<int, int>> v;
	
	v.reserve(n);
	cout << v.capacity() << endl;

	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		v.push_back(make_pair(x, y));
	}

	sort(v.begin(), v.end(), compare);

	for (auto x: v) {
		cout << "Car " << x.first << " " << x.second << "\n";
	}

	return 0;
}