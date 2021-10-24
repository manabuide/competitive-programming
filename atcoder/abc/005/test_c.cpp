#include <bits/stdc++.h>
#include <gtest/gtest.h>
using namespace std;
string solve(int t, int n, vector<int> a, int m, vector<int> b);

TEST(SolveTest, Ex1) {
    int t = 1;
    int n = 3;
    vector<int> a = {1, 2, 3}, b = {2, 3, 4};
    int m = 3;

    EXPECT_EQ("yes", solve(t, n, a, m, b));
}

TEST(SolveTest, Ex2) {
    int t = 1;
    int n = 3;
    vector<int> a = {1, 2, 3}, b = {2, 3, 5};
    int m = 3;

    EXPECT_EQ("no", solve(t, n, a, m, b));
}

TEST(SolveTest, Ex3) {
    int t = 1;
    int n = 3;
    vector<int> a = {1, 2, 3}, b = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int m = 10;

    EXPECT_EQ("no", solve(t, n, a, m, b));
}

TEST(SolveTest, Ex4) {
    int t = 1;
    int n = 3;
    vector<int> a = {1, 2, 3}, b = {1, 2, 2};
    int m = 3;

    EXPECT_EQ("no", solve(t, n, a, m, b));
}

TEST(SolveTest, Ex5) {
    int t = 2;
    int n = 5;
    vector<int> a = {1, 3, 6, 10, 15}, b = {4, 8, 16};
    int m = 3;

    EXPECT_EQ("yes", solve(t, n, a, m, b));
}

string solve(int t, int n, vector<int> a, int m, vector<int> b) {
    string answer = "yes";

    if (n < m) {
        answer = "no";
        return answer;
    }

    int j = 0;

    for (int i = 0; i < m; ++i) {
        while (j < n) {
            int dif = b.at(i) - a.at(j);
            if (dif <= t && dif >= 0) {
                ++j;
                break;
            }

            ++j;

            if (j == n) {
                answer = "no";
            }
        }
    }

    return answer;
}