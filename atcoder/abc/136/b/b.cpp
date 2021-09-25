#include <bits/stdc++.h>
using namespace std;

int count_digit_number(int n) {
    int count = 0;

    while(n) {
        n /= 10;
        count++;
    }

    return count;
}

int main() {
    int n;
	cin >> n;

    int count = 0;
    while(n) {
        if(count_digit_number(n) % 2 == 1) {
            count++;
        }

        n--;
    }

    cout << count << endl;

    return 0;
}