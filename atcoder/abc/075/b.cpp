#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, w;
	cin >> h >> w;

    string t[h];
	for (int str_index = 0; str_index < h; str_index++) {
		string temp;
		cin >> temp;
		t[str_index] = temp;
	}

	string answer[h];

    for(int ly = 0; ly < h; ly++) {
        for(int lx = 0; lx < w; lx++) {
			int bomb_count = 0;

			if (t[ly][lx] == '#') {
				answer[ly] += '#';

				continue;
			}

            for(int y = ly - 1; y < ly + 2; y++) {
                for(int x = lx - 1; x < lx + 2; x++) {
					if (y < 0 || x < 0 || y >= h || x >= w) {
						continue;
					}

					if (t[y][x] == '#') {
						bomb_count++;
					}
                }
            }
			answer[ly] += to_string(bomb_count);
        }
    }

	for (auto a : answer) {
		cout << a << endl;
	}
    return 0;
}