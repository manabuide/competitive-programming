#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;

	vector<int> R;
	for (int i = 0; i < N; i++) {
		int x;
		cin >> x;
		R.push_back(x);
	}

	sort(R.begin(), R.end()) ;

	int temp = R[N - 1] * R[N - 1];
	
	bool is_odd = false;
	for (int i = N - 2; i >= 0; i--) {
		if (is_odd) {
			temp += R[i] * R[i];
			is_odd = false;
		} else {
			temp -= R[i] * R[i];
			is_odd = true;
		}
	}

	cout << fixed << setprecision(12) << temp * M_PI << endl;

    return 0;
}