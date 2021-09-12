#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	int k;
	cin >> s >> k;

	if (k > s.size()) {
		cout << 0 << endl;

		return 0;
	}

	set<string> st;
	for (int i = 0; i < s.size() - k + 1; i++) {
		string temp = s.substr(i, k);

		st.insert(temp);
	}

	cout << st.size() << endl;

	return 0;
}