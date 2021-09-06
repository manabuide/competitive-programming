#include <bits/stdc++.h>
using namespace std;

int find_sum(int n) {
	string s = to_string(n);
	int total = 0;

	for (int i = 0; i < s.size(); i++) {
		total += s[i] - '0';
	}

	return total;	
}

int main() {
	int N, A, B;
	cin >> N >> A >> B;

	int total = 0;
	for (int i = 1; i <= N; i++) {
		if (find_sum(i) >= A && find_sum(i) <= B) {
			total += i;
		}
	}

	cout << total << endl;

	return 0;
}