#include <bits/stdc++.h>
using namespace std;

int main() {

	string S;
	cin >> S;

	bool answer = true;
	int i = 0;
	while (i < S.size()) {
		if (S[i] == 'o' || S[i] == 'k' || S[i] == 'u') {
			i++;
		} else if (S[i] == 'c' && S[i + 1] == 'h') {
			i += 2;
		} else {
			answer = false;
			break;
		}
	}

    if(answer) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 
}