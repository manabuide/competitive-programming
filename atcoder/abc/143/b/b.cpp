#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int d[n];
    for(int i = 0; i < n; i++) {
        cin >> d[i];
    }

    int total = 0;
    for(int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			total += d[i] * d[j];
		}
    }

    cout << total << endl;

    return 0;
}