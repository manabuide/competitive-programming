#include <bits/stdc++.h>
using namespace std;

int main() {
    char s[4];

    for(int i = 0; i < 3; i++) {
        cin >> s[i];
    }

    int count = 0;

    for(int i = 0; i < 3; i++) {
        if(s[i] == '1') {
			count++;
        }
    }

	cout << count << endl;

    return 0;
}