#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
	cin >> n >> k;

	int bbs = 1;
	while (n) {
		int a = bbs * 2;
		int b = bbs + k;

		if (a < b) {
			bbs = a;
		}
		else {
			bbs = b;
		}

		n--;
	}	

    cout << bbs << endl;

    return 0;
}