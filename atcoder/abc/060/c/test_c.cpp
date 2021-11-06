#include <bits/stdc++.h>
#include <gtest/gtest.h>
using namespace std;

long long solve(long long n, long long t, vector<long long> vt);

TEST(SolveTest, Ex1) {
    vector<long long> vt = {0, 3};
    EXPECT_EQ(7, solve(2, 4, vt));
}

TEST(SolveTest, Ex2) {
    vector<long long> vt = {0, 5};
    EXPECT_EQ(8, solve(2, 4, vt));
}

TEST(SolveTest, Ex3) {
    vector<long long> vt = {0, 1000, 1000000, 1000000000};
    EXPECT_EQ(2000000000, solve(4, 1000000000, vt));
}

TEST(SolveTest, Ex4) {
    vector<long long> vt = {0};
    EXPECT_EQ(1, solve(1, 1, vt));
}

TEST(SolveTest, Ex5) {
    vector<long long> vt = {0, 3, 5, 7, 100, 110, 200, 300, 311};
    EXPECT_EQ(67, solve(9, 10, vt));
}

long long solve(long long n, long long t, vector<long long> vt) {
    long long total = t;

    for (int i = 1; i < n; ++i) {
        total += min(t, vt.at(i) - vt.at(i - 1));
    }

    return total;
}