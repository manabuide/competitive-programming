#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;

	string s[n];
	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}

	int count[4] = {};
	for (int i = 0; i < n; i++) {
		if (s[i] == "AC") {
			count[0]++;
		} else if (s[i] == "WA") {
			count[1]++;
		} else if (s[i] == "TLE") {
			count[2]++;
		} else if (s[i] == "RE") {
			count[3]++;
		}
	}

	cout << "AC x " << count[0] << endl;
	cout << "WA x " << count[1] << endl;
	cout << "TLE x " << count[2] << endl;
	cout << "RE x " << count[3] << endl;

    return 0;
}