#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;

	pair<string, int> p[N];
	for (int i = 0; i < N; i++) {
		string s;
		int x;
		cin >> s >> x;
		p[i] = make_pair(s, x);
	}

	int total = 0;
	for (int i = 0; i < N; i++) {
		total += p[i].second;
	}

	for (int i = 0; i < N; i++) {
		if (p[i].second > total / 2) {
			cout << p[i].first << endl;

			return 0;
		}
	}

	cout << "atcoder" << endl;

	return 0;
}