#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;

	string S[N];
	for (int i = 0; i < N; i++) {
		cin >> S[i];
	}

	string answer[N];

	for (int i = 0; i < N; i++) {
		for (int j = N - 1; j >= 0; j--) {
			answer[i] += S[j][i];
		}
	}

	for (auto a : answer) {
		cout << a << endl;
	}

	return 0;
}