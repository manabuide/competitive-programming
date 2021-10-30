#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define floatingpoint fixed << setprecision(10)

int main() {
    int n;
    cin >> n;

    int value = 2025 - n;
    for (int i = 1; i <= 9; ++i) {
        for (int j = 1; j <= 9; ++j) {
            if (i * j == value) {
                cout << i << " x "s << j << "\n"s;
            }
        }
    }

    return 0;
}