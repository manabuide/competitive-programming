#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
	cin >> n;

    pair<int, int> lr[n];
	for (int index = 0; index < n; index++) {
		int first, second;
		cin >> first >> second;

		lr[index] = make_pair(first, second);
	}

	int count = 0;
	for (int lr_index = 0; lr_index < n; lr_index++) {
		for (int seat = lr[lr_index].first; seat <= lr[lr_index].second; seat++) {
			count++;
		}
	}

	cout << count << endl;

    return 0;
}