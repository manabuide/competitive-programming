#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
	cin >> N;
    int Y;
	cin >> Y;

    int yen10000 = -1, yen5000 = -1, yen1000 = -1;

    for(int i = 0; i <= N; i++) {
        for(int j = 0; i + j <= N; j++) {
            int k = N - i - j;
            int total = i * 10000 + j * 5000 + k * 1000;
            if(total == Y) {
                yen10000 = i;
                yen5000 = j;
                yen1000 = k;
            }
        }
    }

    cout << yen10000 << " " << yen5000 << " " << yen1000 << endl;

    return 0;
}