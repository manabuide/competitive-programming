#include <bits/stdc++.h>
using namespace std;

int main() {
	string alphabet = "abcdefghijklmnopqrstuvwxyz"; 
	
	string s;
	cin >> s;

	set<char> st;
	for (int str_index = 0; str_index < s.size(); str_index++) {
		st.insert(s[str_index]);
	}

	vector<char> v;
	for (auto c : st) {
		v.push_back(c);
	}

	char answer = ' ';
	for (int v_index = 0; v_index < v.size(); v_index++) {
		if (v[v_index] != alphabet[v_index]) {
			answer = alphabet[v_index];
			break;
		}
	}

	if (answer != ' ') {
		cout << answer << endl;
	} else {
		cout << "None" << endl;
	}

    return 0;
}