#include <bits/stdc++.h>
using namespace std;

bool is_year(string s) {
    int x = stoi(s);

    if(x <= 99 && x >= 1) {
        return true;
    } else {
        return false;
    }
}

bool is_month(string s) {
    int x = stoi(s);

    if(x <= 12 && x >= 1) {
        return true;
    } else {
        return false;
    }
}

int main() {
    string s;
    cin >> s;

    string head = s.substr(0, 2);
    string tail = s.substr(2, 2);
    string answer;

	if (is_month(head)) {
		if (is_month(tail)) {
			answer = "AMBIGUOUS";
		} else {
			answer = "MMYY";
		}
	} else {
		if (is_month(tail)) {
			answer = "AMBIGUOUS";
		} else {
			answer = "NA";
		}
	}

    cout << answer << endl;

    return 0;
}