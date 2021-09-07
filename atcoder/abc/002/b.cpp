#include <bits/stdc++.h>
using namespace std;

int main() {
    char vowel[5] = {'a', 'i', 'u', 'e', 'o'};
	
	string W;
	cin >> W;

	string answer;

	for (int i = 0; i < W.size(); i++) {
		bool is_vowel = false;
		for (int j = 0; j < 5; j++) {
			if (W[i] == vowel[j]) {
				is_vowel = true;
			}
		}
		if (!is_vowel) {
			answer += W[i];
		}
	}

	cout << answer << endl;

    return 0;
}