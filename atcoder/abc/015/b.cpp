#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;

	int A[N];
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}

	int count = 0;
	float total = 0;
	
	for (int i = 0; i < N; i++) {
		if (A[i] == 0) {
			continue;
		} else {
			count++;
			total += A[i];
		}
	}

	total /= count;
	cout << ceil(total) << endl;

	return 0;
}