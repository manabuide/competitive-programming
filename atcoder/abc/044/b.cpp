#include <bits/stdc++.h>
using namespace std;

int main() {
    string w;
	cin >> w;

    int count[26] = {};

    for(int i = 0; i < w.size(); i++) {
        count[w[i] - 'a']++;
    }

	bool is_even = true;
	for (int i = 0; i < 26; i++) {
		if (count[i] % 2 != 0) {
			is_even = false;

			break;
		}
	}

	if (is_even) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}

    return 0;
}