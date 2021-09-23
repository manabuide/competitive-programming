#include <bits/stdc++.h>
using namespace std;

int main() {
	int r, d, x;
	cin >> r >> d >> x;

	int x2000 = r * x - d;
    vector<int> answer = {x2000};
    for(int i = 0; i < 9; i++) {
		int value = r * answer[i] - d;
		answer.push_back(value);
    }

	for (auto value : answer) {
		cout << value << endl;
	}

    return 0;
}