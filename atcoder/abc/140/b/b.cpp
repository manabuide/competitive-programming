#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n], b[n], c[n - 1];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}

	for (int i = 0; i < n - 1; i++) {
		cin >> c[i];
	}

    int total = 0;
    for(int i = 0; i < n; i++) {
        total += b[a[i] - 1];

        if(a[i] == a[i - 1] + 1) {
            total += c[a[i - 1] - 1];
        }
    }

    cout << total << endl;

    return 0;
}