#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, w, x, y;
    cin >> h >> w >> x >> y;

    string s[h];
    for(int i = 0; i < h; i++) {
        cin >> s[i];
    }

    x -= 1;
    y -= 1;

    int count = -3;

    for(int i = x; i < h; i++) {
        if(s[i][y] != '#') {
            count++;
        } else {
            break;
        }
    }

    for(int i = x; i >= 0; i--) {
        if(s[i][y] != '#') {
            count++;
        } else {
            break;
        }
    }

    for(int i = y; i < w; i++) {
        if(s[x][i] != '#') {
            count++;
        } else {
            break;
        }
    }

    for(int i = y; i >= 0; i--) {
        if(s[x][i] != '#') {
            count++;
        } else {
            break;
        }
    }

    cout << count << endl;

    return 0;
}