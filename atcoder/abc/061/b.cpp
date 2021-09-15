#include <bits/stdc++.h>
using namespace std;

int main() {
	int city_number, street_number;
	cin >> city_number >> street_number;

	int street_count[city_number] = {};

	for (int street_index = 0; street_index < street_number; street_index++) {
		int temp_street_first, temp_street_second;
		cin >> temp_street_first >> temp_street_second;

		street_count[temp_street_first - 1]++;
		street_count[temp_street_second - 1]++;
	}

	for (auto count : street_count) {
		cout << count << endl;
	}

	return 0;
}