#include <bits/stdc++.h>
using namespace std;

int main() {
	double a, b, x, y, answer;

	cin >> a >> b;

	if (a >= 12) {
		a -= 12;
	}

	x = a * 30;
	y = b * 6;
	x += 0.5 * b;
	answer = abs(x - y);

	if (answer > 180) {
		answer = 360 - answer;
	}

	cout << fixed << setprecision(10) << answer << endl;

	return 0;
}