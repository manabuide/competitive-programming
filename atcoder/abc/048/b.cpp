#include <bits/stdc++.h>
using namespace std;

long long count_value(long long n, long long x) {
	if (n < 0) {
		return 0;
	}

	return n / x + 1;
}

int main() {
    long long a, b, x;
	cin >> a >> b >> x;	

	cout << count_value(b, x) - count_value(a - 1, x) << endl;

    return 0;
}