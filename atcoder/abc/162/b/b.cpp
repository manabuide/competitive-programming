#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
	cin >> n;

	long long total = 0;
	for (int x = 1; x <= n; x++) {
		if (x % 3 == 0 && x % 5 == 0) {
			continue;	
		} else if (x % 3 == 0) {
			continue;
		} else if (x % 5 == 0) {
			continue;
		} else {
			total += x;
		}
	}

	cout << total << endl;

    return 0;
}