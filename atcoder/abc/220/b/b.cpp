#include <bits/stdc++.h>
using namespace std;

long long to_decimal(string s, int k) {
    long long x = 0;
    for (int i = s.size() - 1, j = 0; i >= 0; i--, j++) {
        char c = s[j];
        x += atoi(&c) * pow(k, i);
    }
    return x;
}

int main() {
    int k;
    cin >> k;

    string a, b;
    cin >> a >> b;

    long long answer = to_decimal(a, k) * to_decimal(b, k);
    cout << answer << endl;

    return 0;
}