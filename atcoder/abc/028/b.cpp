#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;

	int count[6] = {};

	for (size_t i = 0; i < s.size(); i++) {
		count[s[i] - 'A']++;
	}

	for (int i = 0; i < 5; i++) {
		cout << count[i] << " ";
	}
	cout << count[5] << endl;

	return 0;
}