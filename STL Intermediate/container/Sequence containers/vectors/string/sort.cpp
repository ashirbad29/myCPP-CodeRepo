#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
// compare on the basis of string length
bool compare(string a, string b)
{
  return a.length() < b.length();
}

int main()
{
  int n;
  cin >> n;
  cin.get();

  vector<string> str;
  for (int i = 0; i < n; ++i)
  {
    string s;
    getline(cin, s);
    str.push_back(s);
  }

  sort(str.begin(), str.end(), compare);

  for (auto x : str)
  {
    cout << x << "\n";
  }
}