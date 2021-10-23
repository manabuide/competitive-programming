#include <bits/stdc++.h>
#include <gtest/gtest.h>
using namespace std;

struct answer {
    string dir;
    int w;
};

answer solve(int deg, int dis);

TEST(SolveTest, Ex0) {
    answer a = solve(0, 0);
    EXPECT_EQ("C"s, a.dir);
    EXPECT_EQ(0, a.w);
}

TEST(SolveTest, Ex1) {
    answer a = solve(2750, 628);
    EXPECT_EQ("W"s, a.dir);
    EXPECT_EQ(5, a.w);
}

TEST(SolveTest, Ex2) {
    answer a = solve(161, 8);
    EXPECT_EQ("C"s, a.dir);
    EXPECT_EQ(0, a.w);
}

TEST(SolveTest, Ex3) {
    answer a = solve(3263, 15);
    EXPECT_EQ("NNW"s, a.dir);
    EXPECT_EQ(1, a.w);
}

TEST(SolveTest, Ex4) {
    answer a = solve(1462, 1959);
    EXPECT_EQ("SE"s, a.dir);
    EXPECT_EQ(12, a.w);
}

TEST(SolveTest, Ex5) {
    answer a = solve(1687, 1029);
    EXPECT_EQ("SSE"s, a.dir);
    EXPECT_EQ(8, a.w);
}

TEST(SolveTest, Ex6) {
    answer a = solve(2587, 644);
    EXPECT_EQ("WSW"s, a.dir);
    EXPECT_EQ(5, a.w);
}

TEST(SolveTest, Ex7) {
    answer a = solve(113, 201);
    EXPECT_EQ("NNE"s, a.dir);
    EXPECT_EQ(3, a.w);
}

TEST(SolveTest, Ex8) {
    answer a = solve(2048, 16);
    EXPECT_EQ("SSW"s, a.dir);
    EXPECT_EQ(1, a.w);
}

TEST(SolveTest, Ex9) {
    answer a = solve(3599, 11999);
    EXPECT_EQ("NNW"s, a.dir);
    EXPECT_EQ(12, a.w);
}

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