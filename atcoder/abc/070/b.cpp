#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;

	int ac_max = max(a, c);
	int bd_min = min(b, d);
	
	cout << max(0, bd_min - ac_max) << endl;

	return 0;
}