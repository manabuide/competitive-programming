#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;

	map<int, int> mp;

	for (int i = 0; i < N; i++) {
		int price;
		cin >> price;

		mp[price]++;
	}
	
	vector<int> v;
	for (auto iter = mp.begin(); iter != mp.end(); iter++) {
		v.push_back(iter->first);
	}

	sort(v.begin(), v.end(), greater<int>());

	cout << v[1] << endl;	

	return 0;
}