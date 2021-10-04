#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;

	vector<int> a;
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;

		a.push_back(temp);
	}

    sort(a.begin(), a.end(),
         [](const int a1, const int a2) { return a1 < a2; });

    for(int x = 1; x <= n; x++) {
        if(x != a[x - 1]) {
            cout << "No" << endl;

            return 0;
        }
    }

    cout << "Yes" << endl;

    return 0;
}