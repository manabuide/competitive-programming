#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cin >> x;

	vector<bool> vx(x + 1);

	vx[1] = true;
	for (int b = 2; b <= x; b++) {
		int v = b * b;

		while (v <= x) {
			vx[v] = true;

			v *= b;
		}
	}

	for (int vx_index = x; vx_index >= 1; vx_index--) {
		if (vx[vx_index]) {
			cout << vx_index << endl;

			break;
		}
	}

    return 0;
}