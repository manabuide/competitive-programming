#include <bits/stdc++.h>
using namespace std;

int main() {
    int H1, W1;
    int H2, W2;
	cin >> H1 >> W1 >> H2 >> W2;

    if(H1 == H2) {
        cout << "YES" << endl;
    } else if(H1 == W2) {
        cout << "YES" << endl;
    } else if(H2 == W1) {
        cout << "YES" << endl;
    } else if (W1 == W2) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}

    return 0;
}