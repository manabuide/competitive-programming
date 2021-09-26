#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
	cin >> s;

	int j = s.size() - 1;
	int count = 0;
	for (int i = 0; i < s.size(); i++) {
		if (i == j) {
			break;
		}
		if (s[i] != s[j]) {
			s[j] = s[i];
			count++;
		}

		j--;
	}

	cout << count << endl;

    return 0;
}