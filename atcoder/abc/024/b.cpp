#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    int T;
    cin >> T;

    int A[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int total = 0;
    for (int i = 0; i < N; i++) {
        if (i == N - 1) {
            total += T;
        } else if (A[i] + T < A[i + 1]) {
            total += T;
        } else {
            total += A[i + 1] - A[i];
        }
    }

    cout << total << endl;

    return 0;
}