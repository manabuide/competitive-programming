#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;

	int count = 0;
	for (int i = 0; i < N; i++) {
		int x;
		cin >> x;
		
		while (x % 2 == 0 || x % 3 == 2) {
			x--;
			count++;
		}
	}

  	cout << count << endl;
    
	return 0;
}
