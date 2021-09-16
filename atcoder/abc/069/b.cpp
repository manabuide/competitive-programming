#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
	cin >> s;

	string answer;

	answer += s[0];
	answer += to_string(s.size() - 2);
	answer += s[s.size() - 1];

	cout << answer << endl;

    return 0;
}