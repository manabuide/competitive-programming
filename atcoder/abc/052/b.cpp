#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;

	string S;
	cin >> S;

	int x = 0;
	int max = 0;
	for (int i = 0; i < S.size(); i++) {
		if (S[i] == 'I') {
			x++;
		} else {
			x--;
		}

		if (max < x) {
			max = x;
		}
	}

	cout << max << endl;

	return 0;
}