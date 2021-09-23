#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;

	int v[n];
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	int c[n];
	for (int i = 0; i < n; i++) {
		cin >> c[i];
	}

	int answer = 0;
	for (int i = 0; i < n; i++) {
		if (v[i] > c[i]) {
			answer += v[i] - c[i];
		}
	}
	
	cout << answer << endl;

    return 0;
}