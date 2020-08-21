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
	while(t--) {
		int n;
		cin >> n;
		int arr[n];
		for (int i = 0; i < n; ++i) {
			cin >> arr[i];
		}

		next_permutation(arr, arr+n);
		for (int i = 0; i < n; ++i) {
			cout << arr[i] << " ";
		}
		cout << endl;
	}
	return 0;
}