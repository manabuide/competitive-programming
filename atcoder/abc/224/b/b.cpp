#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, w;
    cin >> h >> w;

    vector<vector<int>> a(h, vector<int>(w));
    for (int i = 0; i < h; ++i) {
        for (int j = 0; j < w; ++j) {
            cin >> a.at(i).at(j);
        }
    }

    string answer = "Yes"s;

    for (int i1 = 0; i1 < h; ++i1) {
        for (int j1 = 0; j1 < w; ++j1) {
            for (int i2 = 1; i2 < h; ++i2) {
                for (int j2 = 1; j2 < w; ++j2) {
                    if ((i1 >= 0 && i1 < i2) && (j1 >= 0 && j1 < j2)) {
                        int left = a.at(i1).at(j1) + a.at(i2).at(j2);
                        int right = a.at(i2).at(j1) + a.at(i1).at(j2);

                        if (left > right) {
                            answer = "No"s;
                        }
                    }
                }
            }
        }
    }
    cout << answer << "\n"s;

    return 0;
}