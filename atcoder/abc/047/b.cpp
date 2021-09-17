#include <bits/stdc++.h>
using namespace std;

int main() {
	int W, H, N;
	cin >> W >> H >> N;
	
	tuple<int, int, int> t[N];
	for (int i = 0; i < N; i++) {
		int x, y, a;
		cin >> x >> y >> a;

		t[i] = make_tuple(x, y, a);
	}

	int x = 0, y = 0;
	for (int i = 0; i < N; i++) {
		if (get<2>(t[i]) == 1) {
			x = get<0>(t[i]);
		} else if (get<2>(t[i]) == 2) {
			W = get<0>(t[i]);
		} else if (get<2>(t[i]) == 3) {
			y = get<1>(t[i]);
		} else if (get<2>(t[i]) == 4) {
			H = get<1>(t[i]);
		}
	}

	int difx = W - x;
	int dify = H - y;
	if (difx > 0 && dify > 0) {
		cout << difx * dify << endl;
	} else {
		cout << 0 << endl;
	} 

	return 0;
}