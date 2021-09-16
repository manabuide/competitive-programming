#include <bits/stdc++.h>
using namespace std;

int main() {
    int number;
	cin >> number;
    int button[number];
	for (int index = 0; index < number; index++) {
		int temp;
		cin >> temp;
		button[index] = temp - 1;
	}

    bool can = false;
    int index = 0;
    int count = 0;
    while(count < number) {
		if (index == 1) {
			can = true;
			break;
		}

		index = button[index];
        count++;
    }

    if(can) {
        cout << count << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}