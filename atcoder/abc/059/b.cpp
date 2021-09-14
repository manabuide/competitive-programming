#include <bits/stdc++.h>
using namespace std;

int main() {
	string answer[3] = {"GREATER", "LESS", "EQUAL"};

	string A, B;
	cin >> A >> B;

	if (A.size() > B.size()) {
		cout << answer[0] << endl;
		
		return 0;
	}

	if (A.size() < B.size()) {
		cout << answer[1] << endl;

		return 0;
	}

	for (int i = 0; i < A.size(); i++) {
		if (A[i] > B[i]) {
			cout << answer[0] << endl;

			return 0;
		}

		if (A[i] < B[i]) {
			cout << answer[1] << endl;

			return 0;
		}
	}

	cout << answer[2] << endl;

    return 0;
}