#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;

	for (int str_index = 0; str_index < s.size(); str_index++) {
		int index = str_index + 1;
		if (index % 2 != 0) {
			cout << s[str_index];
		}
	}
	cout << endl;

	return 0;
}