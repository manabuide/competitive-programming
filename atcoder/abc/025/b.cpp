#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    int A;
    cin >> A;

    int B;
    cin >> B;

    int total = 0;
    for(int i = 0; i < N; i++) {
		string s;
		int x;
		cin >> s >> x;

        if(s == "East") {
            if(x < A) {
                total += A;
            } else if(x > B) {
                total += B;
            } else {
                total += x;
            }
        } else {
            if(x < A) {
                total -= A;
            } else if(x > B) {
                total -= B;
            } else {
                total -= x;
            }
        }
    }

    if(total == 0) {
		cout << total << endl;
    } else if(total > 0) {
        cout << "East " << abs(total) << endl;
    } else {
        cout << "West " << abs(total) << endl;
    }

    return 0;
}