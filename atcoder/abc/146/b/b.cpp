#include <bits/stdc++.h>
using namespace std;

int main() {
    string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZ";

    int n;
	cin >> n;

    string s;
	cin >> s;

    for(int i = 0; i < s.size(); i++) {
		cout << alphabet[(int)s[i] - 65 + n];
    }
	cout << endl;

    return 0;
}