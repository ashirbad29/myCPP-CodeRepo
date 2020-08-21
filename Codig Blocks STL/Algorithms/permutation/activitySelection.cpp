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

int32_t main()
{
	c_p_p();

	int t;
	cin >> t;
	vector <pair<int, int>> v;
	while(t--) {
		int n;
		cin >> n;
		while(n--) {
			int startTime, endTime;
			cin >> startTime >> endTime;
			v.push_back(make_pair(startTime, endTime));
		}
	}
	int count = 1;
	int nextStart = v[0].second;
	for(int i = 1; i < v.size(); i++) {
		if(v[i].first >= nextStart) {
			nextStart = v[i].second;
			count++;
		}
	}
	cout << count << "\n";

	for (auto x: v) {
		cout << x.first << " " << x.second << endl;
	}
	return 0;
}