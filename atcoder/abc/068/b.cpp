#include <bits/stdc++.h>
using namespace std;

void solve1() {
    int number;
    cin >> number;

    int max_count = 0;
    int answer = 0;

    for (int x = number; x > 0; x--) {
        int count = 0;
        int local_x = x;

        while (true) {
            if (local_x % 2 == 0) {
                local_x /= 2;
                count++;
            } else {
                break;
            }
        }

        if (max_count < count) {
            max_count = count;
            answer = x;
        }
    }

    cout << answer << endl;
}

int main() { return 0; }