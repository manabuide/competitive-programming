#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, w;
    cin >> h >> w;

	int a[h][w];
    int min_a = INT_MAX;
    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) {
            cin >> a[i][j];
            min_a = min(min_a, a[i][j]);
        }
    }

    int answer = 0;
    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) {
            answer += a[i][j] - min_a;
        }
    }

    cout << answer << endl;

    return 0;
}