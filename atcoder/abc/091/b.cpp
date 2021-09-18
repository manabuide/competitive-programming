#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    map<string, int> mp;
    while(n) {
        string str_temp;
        cin >> str_temp;

        mp[str_temp] += 1;

        n--;
    }

    int m;
    cin >> m;

    while(m) {
        string str_temp;
        cin >> str_temp;

        mp[str_temp] -= 1;

		m--;
    }

	int max = 0;
    for(auto itr = mp.begin(); itr != mp.end(); itr++) {
		if (max < itr->second) {
			max = itr->second;
		}
    }

	cout << max << endl;

    return 0;
}