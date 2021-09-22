#include <bits/stdc++.h>
using namespace std;

int main() {
	double btc = 380000.0;
    
	int n;
	cin >> n;
	
	vector<pair<double, string>> vp;
	for (int i = 0; i < n; i++) {
		double gift;
		string type;
		cin >> gift >> type;

		vp.push_back(make_pair(gift, type));
	}

	double total = 0.0;
	for (int i = 0; i < n; i++) {
		if (vp[i].second == "JPY") {
			total += vp[i].first;
		} else if (vp[i].second == "BTC") {
			total += vp[i].first * btc;
		}	
	}

	cout << fixed << setprecision(4) << total << endl;

    return 0;
}