#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
	cin >> N;

    int a[N];
	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}

    int total = 0;
    for(int i = 0; i < N; i++) {
        total += a[i];
    }

    int average = total / N;
    if(average * N != total) {
        cout << -1 << endl;
        return 0;
    }

    int count = 0;
    int temp = a[0];
    for(int i = 1; i < N; i++) {
        if(temp != average * i) {
            count++;
        }
        temp += a[i];
    }

    cout << count << endl;

    return 0;
}