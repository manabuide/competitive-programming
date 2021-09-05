#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
	cin >> S;

	int len = S.size();

	while (true) {
		if (S.substr(len - 5, 5) == "dream") {
			len -= 5;
		} else if (S.substr(len - 5, 5) == "erase") {
			len -= 5;
		} else if (S.substr(len - 6, 6) == "eraser") {
			len -= 6;
		} else if (S.substr(len - 7, 7) == "dreamer") {
			len -= 7;
		} else {
			cout << "NO" << endl;
			break;
		}

		if (len <= 0) {
			cout << "YES" << endl;
			break;
		}
	}	
	
	return 0;
}