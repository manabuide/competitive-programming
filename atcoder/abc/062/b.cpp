#include <bits/stdc++.h>
using namespace std;

int main() {
	int height, width;
	cin >> height >> width;

	char image[height][width];
	for (int y = 0; y < height; y++) {
		for (int x = 0; x < width; x++) {
			cin >> image[y][x];
		}
	}

	int margin_top = 1, margin_bottom = 1;
	int margin_left = 1, margin_right = 1;
	for (int y = 0; y < height + margin_top + margin_bottom; y++) {
		for (int x = 0; x < width + margin_left + margin_right; x++) {
			if (y == 0 || y == height + margin_bottom) {
				cout << '#';
			} else if (x == 0 || x == width + margin_right) {
				cout << '#';
			} else {
				cout << image[y - margin_top][x - margin_left];
			}
		}
		cout << endl;
	}

	return 0;
}