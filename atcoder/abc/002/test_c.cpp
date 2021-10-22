#include <bits/stdc++.h>
#include <gtest/gtest.h>
using namespace std;

double solve(int xa, int ya, int xb, int yb, int xc, int yc);

TEST(SolveTest, Ex1) { EXPECT_EQ(5.0, solve(1, 0, 3, 0, 2, 5)); }

TEST(SolveTest, Ex2) { EXPECT_EQ(2.0, solve(-1, -2, 3, 4, 5, 6)); }

TEST(SolveTest, Ex3) { EXPECT_EQ(43257.5, solve(298, 520, 903, 520, 4, 663)); }

double solve(int xa, int ya, int xb, int yb, int xc, int yc) {
    double answer;

    answer = abs((xa - xc) * (yb - yc) - (xb - xc) * (ya - yc)) / 2.0;

    return answer;
}