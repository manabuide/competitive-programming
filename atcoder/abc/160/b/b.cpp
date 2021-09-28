#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
	cin >> x; 

    int m500 = x / 500;
    int m5 = (x - (m500 * 500)) / 5;

    cout << (m500 * 1000) + (m5 * 5) << endl;

    return 0;
}