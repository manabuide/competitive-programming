#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
	cin >> a >> b;

    int count = 0;

    for(int x = a; x <= b; x++) {
		int one_digit = x % 10;
		int two_digit = x / 10 % 10;
		int four_digit = x / 1000 % 10;
		int five_digit = x / 10000 % 10;

		if (one_digit == five_digit && two_digit == four_digit) {
			count++;
		}
    }

	cout << count << endl;

    return 0;
}