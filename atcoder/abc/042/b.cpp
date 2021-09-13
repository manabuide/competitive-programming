#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, L;
	cin >> N >> L;
    
	vector<string> vs;
	for (int i = 0; i < N; i++) {
		string s;
		cin >> s;

		vs.push_back(s);
	}

	sort(vs.begin(), vs.end());

	for (auto s : vs) {
		cout << s;
	}
	cout << endl;

    return 0;
}