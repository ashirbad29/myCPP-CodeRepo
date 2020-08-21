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
	int n;
	int arr[100000];
	int k;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}
	cin >> k;

	// we have to process first k elements
	deque <int> dq(k);
	int i;
	for (i = 0; i < k; i++) {
		while(!dq.empty() && arr[i] > arr[dq.back()]) {
			dq.pop_back();
		}
		dq.push_back(i);
	}

	// process the remaining element
	for ( ; i < n; i++) {
		cout << arr[dq.front()] << " ";

		// remove the elements which are not part of window
		while((!dq.empty() && (dq.front() <= i - k))) {
			dq.pop_front();
		}

		// remove the elements which are not useful and are in window
		while(!dq.empty() && arr[i] >= arr[dq.back()]) {
			dq.pop_back();
		}

		// add the new elements
		dq.push_back(i);
	}
	cout << dq.front() << endl;
	return 0;
}