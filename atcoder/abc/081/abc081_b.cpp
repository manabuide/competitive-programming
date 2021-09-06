#include <bits/stdc++.h>
using namespace std;

int main() {

    int N;
    cin >> N;

    int A[N];
    for(int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int count = 0;
    while(true) {
        bool is_even = false;
        for(int i = 0; i < N; i++) {
            if(A[i] % 2 == 0) {
                is_even = true;
            } else {
                is_even = false;
                break;
            }
        }
        if(is_even == true) {
            for(int i = 0; i < N; i++) {
                A[i] /= 2;
            }
            count++;
        } else {
            break;
        }
    }

    cout << count << endl;

    return 0;
}