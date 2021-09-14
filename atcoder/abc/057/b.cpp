#include <bits/stdc++.h>
using namespace std;

int main() {
	int N, M;
	cin >> N >> M;

	pair<int, int> ab[N], cd[M];

	for (int i = 0; i < N; i++) {
		int x, y;
		cin >> x >> y;

		ab[i] = make_pair(x, y);
	}

	for (int i = 0; i < M; i++) {
		int x, y;
		cin >> x >> y;

		cd[i] = make_pair(x, y);
	}

    for(int i = 0; i < N; i++) {
        int checkpoint_number = 1;
        int min =
            abs(ab[i].first - cd[0].first) + abs(ab[i].second - cd[0].second);

        for(int j = 1; j < M; j++) {
            int dist = abs(ab[i].first - cd[j].first) + 
                       abs(ab[i].second - cd[j].second);
            if(min > dist) {
                min = dist;
                checkpoint_number = j + 1;
            }
        }
        cout << checkpoint_number << endl;
    }

    return 0;
}