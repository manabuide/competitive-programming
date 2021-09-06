#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
	cin >> N;

    vector<int> d;
	for (int i = 0; i < N; i++) {
		int tmp;
		cin >> tmp;
		d.push_back(tmp);
	}

	sort(d.begin(), d.end(), greater<int>{});

	int count = 0;
	int previous_value = 0;

	for (int i = 0; i < N; i++) {
		if (previous_value == d[i]) {
			continue;
		} else {
			count++;
			previous_value = d[i];
		}

	}

	cout << count << endl;

    return 0;
}