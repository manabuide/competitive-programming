#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
	cin >> N;

    int T[N];
	for (int i = 0; i < N; i++) {
		cin >> T[i];
	}

    int M;
	cin >> M;

	pair<int, int> px[M];
	for (int i = 0; i < M; i++) {
		int P, X;
		cin >> P >> X;

		px[i] = make_pair(P, X);
	}

    for(int i = 0; i < M; i++) {
        int answer = 0;
        for(int j = 0; j < N; j++) {
            if(j == px[i].first - 1) {
                answer += px[i].second;
            } else {
                answer += T[j];
            }
        }
        cout << answer << endl;
    }

    return 0;
}