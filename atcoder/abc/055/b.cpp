#include <bits/stdc++.h>
using namespace std;

int main() {
	long long N;
	cin >> N;

	long long answer = 1;
	for (long long i = 1; i <= N; i++) {
		answer = i * answer % 1000000007;
	}

	cout << answer << endl;

	return 0;
}