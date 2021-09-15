#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B, C;
	cin >> A >> B >> C;

	bool can = false;
	for (int i = 0; i < B; i++) {
		if (A * (i + 1) % B == C) {
			can = true;
			break;
		}
	}

    if(can) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
