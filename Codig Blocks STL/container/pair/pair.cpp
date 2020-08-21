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

	// pair is a container that helps us to bind
	// two values as sigle entity

	pair<int, int> p;
	p.first = 10;
	p.second = 11;
	cout << p.first << " " << p.second << endl;

	// 2nd method
	pair<int, string> p2 = make_pair(10, "scam");
	cout << p2.first << " " << p2.second << endl;
	return 0;
}