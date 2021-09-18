#include <bits/stdc++.h>
using namespace std;

int main() {
    //int n = 3, x = 1000;
    //int m[n] = {120, 100, 140};

	int n, x;
	cin >> n >> x;

	int m[n];
	for (int m_index = 0; m_index < n; m_index++) {
		cin >> m[m_index];
	}

	int making_count = 0;
	for (int m_index = 0; m_index < n; m_index++) {
		x = x - m[m_index];
		making_count++;
	}

	int min_m = m[0];
	for (auto price : m) {
		if (min_m > price) {
			min_m = price;
		}
	}

	while (true) {
		if (x < min_m) {
			break;
		}
		
		x -= min_m;
		making_count++;

	}

	cout << making_count << endl;
    
	return 0;
}