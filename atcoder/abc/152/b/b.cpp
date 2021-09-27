#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
	cin >> a >> b;

	string a_str;
	for (int i = 0; i < b; i++) {
		a_str += to_string(a);
	}

	string b_str;
	for (int i = 0; i < a; i++) {
		b_str += to_string(b);
	}

	if (a_str < b_str) {
		cout << a_str << endl;
	} else {
		cout << b_str << endl;
	}

    return 0;
}