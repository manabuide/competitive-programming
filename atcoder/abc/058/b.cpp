#include <bits/stdc++.h>
using namespace std;

int main() {
	string O, E;
	cin >> O >> E;

	for (int i = 0; i < O.size(); i++) {
		cout << O[i];
		if (i < E.size()) {
			cout << E[i];
		}
	}

	cout << endl;

	return 0;
}