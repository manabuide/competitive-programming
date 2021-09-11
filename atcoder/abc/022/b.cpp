#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;

	set<int> st;
	int count = 0;

	for (int i = 0; i < N; i++) {
		int A;
		cin >> A;

		if (st.count(A)) {
			count++;
		}
		st.insert(A);
	}

	cout << count << endl;

	return 0;
}