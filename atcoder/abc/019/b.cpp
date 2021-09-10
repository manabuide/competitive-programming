#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;

	vector<pair<char, int>> vp;
	char c = s[0];
	int count = 0;
	for (int i = 0; i < s.size() + 1; i++) {
		if (c == s[i]) {
			count++;
		} else {
			vp.push_back(make_pair(c, count));
			c = s[i];
			count = 1;
		}
	}

	for (auto v : vp) {
		cout << v.first << v.second;
	}
	cout << endl;

	return 0;
}