#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    string answer;

    int h = N / 3600;
    if(h < 10) {
        answer += '0' + to_string(h);
    } else {
        answer += to_string(h);
    }

    answer += ':';

    int m = (N / 60) % 60;
    if(m < 10) {
        answer += '0' + to_string(m);
    } else {
        answer += to_string(m);
    }

    answer += ':';

    int s = N % 60;
    if(s < 10) {
        answer += '0' + to_string(s);
    } else {
        answer += to_string(s);
    }

    cout << answer << endl;

    return 0;
}