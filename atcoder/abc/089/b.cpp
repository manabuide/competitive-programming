#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;

	char s[n];
	for (int index = 0; index < n; index++) {
		cin >> s[index];
	}

	set<char> st;
	for (int index = 0; index < n; index++) {
		st.insert(s[index]);
	}

	if (st.size() == 4) {
		cout << "Four" << endl;
	} else {
		cout << "Three" << endl;
	}

	return 0;
}