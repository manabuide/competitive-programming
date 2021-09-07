#include <bits/stdc++.h>
using namespace std;

int main() {
    int m;
	cin >> m;

    string VV;

    if(m < 100) {
        VV = "00";
    } else if(m >= 100 && m <= 5000) {
        int tmp = m / 100;
        if(tmp < 10) {
            VV = "0" + to_string(tmp);
        } else {
            VV = to_string(tmp);
        }
    } else if(m >= 6000 && m <= 30000) {
        VV = to_string((m / 1000) + 50);
    } else if (m >= 35000 && m <= 70000) {
		VV = to_string((((m/ 1000) - 30) / 5) + 80);
	} else if (m >= 70000) {
		VV = "89";
	}

    cout << VV << endl;

    return 0;
}