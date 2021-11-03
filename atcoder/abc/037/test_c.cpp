#include <bits/stdc++.h>
#include <gtest/gtest.h>
using namespace std;

long long solve(long long n, int k, vector<long long> a);

TEST(SolveTest, Ex1) { EXPECT_EQ(49, solve(5, 3, {1, 2, 4, 8, 16})); }

TEST(SolveTest, Ex2) {
    vector<long long> a = {100000000, 100000000, 98667799,  100000000,
                           100000000, 100000000, 100000000, 99986657,
                           100000000, 100000000, 100000000, 100000000,
                           100000000, 98995577,  100000000, 100000000,
                           99999876,  100000000, 100000000, 99999999};

    EXPECT_EQ(10988865195, solve(20, 10, a));
}

long long solve(int n, int k, vector<long long> a) {
    vector<long long> s(n + 1, 0);

    for (int i = 0; i < n; ++i) {
        s.at(i + 1) = s.at(i) + a.at(i);
    }

    long long total = 0;
    for (int i = 0; i <= n - k; ++i) {
        total += s.at(i + k) - s.at(i);
    }

    return total;
}