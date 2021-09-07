#include <bits/stdc++.h>
using namespace std;

int main() {
	char table[4][4];

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			cin >> table[i][j];
		}
	}

	for (int i = 3; i >= 0; i--) {
		for (int j = 3; j >= 0; j--) {
			cout << table[i][j];

			if (j != 0) {
				cout << ' ';	
			}
		}
		cout << endl;
	}

	return 0;
}