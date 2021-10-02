#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    double x[n], y[n];
    for(int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }

    int count = 0;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            double dist = abs(y[i] - y[j]) / abs(x[i] - x[j]);

            if(dist >= -1 && dist <= 1) {
                count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}