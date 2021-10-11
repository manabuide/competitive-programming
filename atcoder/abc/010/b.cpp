#include <bits/stdc++.h>
using namespace std;

void solve1() {
    int N;
    cin >> N;

    int count = 0;
    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;

        while (x % 2 == 0 || x % 3 == 2) {
            x--;
            count++;
        }
    }

    cout << count << endl;
}

int main() { return 0; }
