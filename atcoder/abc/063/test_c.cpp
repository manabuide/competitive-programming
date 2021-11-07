#include <bits/stdc++.h>
#include <gtest/gtest.h>
using namespace std;

long long solve(int n, vector<int> s);

TEST(SolveTest, Ex1) { EXPECT_EQ(25, solve(3, {5, 10, 15})); }

TEST(SolveTest, Ex2) { EXPECT_EQ(35, solve(3, {10, 10, 15})); }

TEST(SolveTest, Ex3) { EXPECT_EQ(0, solve(3, {10, 20, 30})); }

TEST(SolveTest, Ex4) { EXPECT_EQ(1, solve(1, {1})); }

TEST(SolveTest, Ex5) {
    int n = 100;
    vector<int> s(n + 1);
    for (int i = 0; i < n; ++i) {
        s.at(i) = 1;
    }

    EXPECT_EQ(99, solve(100, s));
}

long long solve(int n, vector<int> s) {
    long long total = 0;
    int minimum_value = -1;

    for (int i = 0; i < n; ++i) {
        total += s.at(i);
        if (s.at(i) % 10 != 0) {
            if (minimum_value == -1) {
                minimum_value = s.at(i);
            } else {
                minimum_value = min(minimum_value, s.at(i));
            }
        }
    }

    if (total % 10 == 0 && minimum_value == -1) {
        return 0;
    } else if (total % 10 == 0 && minimum_value != -1) {
        return total - minimum_value;
    } else {
        return total;
    }
}
