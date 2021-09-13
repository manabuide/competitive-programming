#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    int K;
	cin >> N >> K;

    int answer = 1;
    for(int i = 0; i < N; i++) {
        if(i) {
            answer *= K - 1;
        } else {
            answer *= K;
        }
    }

    cout << answer << endl;

    return 0;
}