#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    int A;
    cin >> A;

    int B;
    cin >> B;

    pair<string, int> sd[N];
    for(int i = 0; i < N; i++) {
        string s;
        int x;
        cin >> s >> x;
        sd[i] = make_pair(s, x);
    }

    int total = 0;
    for(int i = 0; i < N; i++) {
        if(sd[i].first == "East") {
            if(sd[i].second < A) {
                total += A;
            } else if(sd[i].second > B) {
                total += B;
            } else {
                total += sd[i].second;
            }
        } else {
            if(sd[i].second < A) {
                total -= A;
            } else if(sd[i].second > B) {
                total -= B;
            } else {
                total -= sd[i].second;
            }
        }
    }

    if(total == 0) {
		cout << total << endl;
    } else if(total < 0) {
        cout << "East " << abs(total) << endl;
    } else {
        cout << "West " << abs(total) << endl;
    }

    return 0;
}