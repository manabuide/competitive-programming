#include <bits/stdc++.h>
using namespace std;

int main() {
	string S = "UULL?";
	int T = 2;

	int x = 0, y = 0, z = 0;
	for (auto i : S) {
		if (i == 'U') {
			y++;
		}

		if (i == 'D') {
			y--;
		}

		if (i == 'R') {
			x++;
		}

		if (i == 'L') {
			x--;
		}

		if (i == '?') {
			z++;
		}
	}

	x = abs(x);
	y = abs(y);

	if (T == 1) {
		cout << x + y + z << endl;
	} else {
		int xy = x + y;
		cout << max((xy + z) % 2, xy - z) << endl;
	}

    return 0;
}