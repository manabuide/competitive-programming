#include <bits/stdc++.h>
using namespace std;

struct answer {
    string dir;
    int w;
};

double round_n(double number, double n) {
    number = number * pow(10, n - 1);
    number = round(number);
    number /= pow(10, n - 1);
    return number;
}

answer solve(int deg, int dis) {
    answer a;

    double d = dis / 60.0;
    d = round_n(d, 2);
    d *= 10;

    const vector<int> beaufort_scale = {2,   15,  33,  54,  79,  107, 138,
                                        171, 207, 244, 284, 326, 999};

    int left = 0, right = beaufort_scale.at(0);
    for (int i = 0; i <= 12; ++i) {
        if (i == 12) {
            if (d >= left) {
                a.w = i;
                break;
            }
        } else {
            if (d >= left && d <= right) {
                a.w = i;
                break;
            }
        }
        left = right + 1;
        right = beaufort_scale.at(i + 1);
    }

    deg *= 10;

    const vector<string> sixteen_direction = {
        "N"s, "NNE"s, "NE"s, "ENE"s, "E"s, "ESE"s, "SE"s, "SSE"s,
        "S"s, "SSW"s, "SW"s, "WSW"s, "W"s, "WNW"s, "NW"s, "NNW"s};

    a.dir = "N"s;
    left = 0, right = 1125;
    for (int i = 0; i < 16; ++i) {
        if (i == 15) {
            if (deg >= left) {
                a.dir = sixteen_direction.at(i);
                break;
            }
        } else {
            if (deg >= left && deg < right) {
                a.dir = sixteen_direction.at(i);
                break;
            }
        }

        left = right;
        right = left + 2250;
    }

    if (a.w == 0) {
        a.dir = "C"s;
    }

    return a;
}

int main() {
    int deg, dis;
    cin >> deg >> dis;

    answer a = solve(deg, dis);

    cout << a.dir << " " << a.w << "\n"s;

    return 0;
}