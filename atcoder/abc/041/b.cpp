#include <bits/stdc++.h>
using namespace std;

int main() {
    long long A, B, C;
	cin >> A >> B >> C;

    int m = 1000000007;

    long long X = (A * B) % m;
	X = (X * C) % m;

    cout << X << endl;

    return 0;
}