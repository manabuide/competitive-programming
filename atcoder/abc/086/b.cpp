#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;

	string str;
	str += to_string(a) + to_string(b);

	int digit = stoi(str);

	int sqrt_temp = floor(sqrt(digit));

	if (sqrt_temp * sqrt_temp == digit) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}

	return 0;
}