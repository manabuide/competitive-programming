#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	int Q;
	cin >> N >> Q;
	
	int a[N] = {};
	for (int i = 0; i < Q; i++) {
		int L, R, T;
		cin >> L >> R >> T;
		
		for(int j = L - 1; j < R; j++) {
			a[j] = T;	
		}
	}

	for (int i = 0; i < N; i++){
		cout << a[i] << endl;
	}

	return 0;
}