#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;

	int answer;
	for (int h = 1; h <= n; h++) {
		for (int w = 1; h * w <= n; w++) {
			int c = abs(h - w) + n - h * w;
			if (w == 1 && h == 1 || answer > c) {
				answer = c;
			}
		}
	}

	cout << answer << endl;

	return 0;
}