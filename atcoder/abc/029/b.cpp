#include <bits/stdc++.h>
using namespace std;

int main() {

	int count = 0;

	for (int i = 0; i < 12; i++) {
		string s;
		cin >> s;

		set<char> st;
		for (int j = 0; j < s.size(); j++) {
			st.insert(s[j]);
		}

		if (st.count('r')) {
			count++;
		}
	}

	cout << count << endl;

	return 0;
}