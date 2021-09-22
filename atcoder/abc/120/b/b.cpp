#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b, k;
	cin >> a >> b >> k;

    int count = 1;
    for(int x = 100; x >= 1; x--) {
        if(a % x == 0 && b % x == 0) {
			if (count == k) {
				cout << x << endl;

				return 0;
			}
			count++;
        }
    }

    return 0;
}