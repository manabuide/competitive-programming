#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;

	vector<int> T;
	for (int i = 0; i < N; i++) {
		int tmp;
		cin >> tmp;
	
		T.push_back(tmp);
	}

	sort(T.begin(), T.end());

	cout << T[0] << endl;

	return 0;
}