#include <bits/stdc++.h>
#include <gtest/gtest.h>
using namespace std;

int solve(string s);

TEST(SolveTest, Ex1) { EXPECT_EQ(0, solve("0+0+2*0")); }

TEST(SolveTest, Ex2) { EXPECT_EQ(2, solve("3*1+1*2")); }

TEST(SolveTest, Ex3) { EXPECT_EQ(5, solve("3*1*4+0+2*0+5*2+9*8*6+1+3")); }

int solve(string s) {
    int count = 0;

    bool has_zero = false;
    for (int i = 0; i < (int)s.size(); ++i) {
        if (s.at(i) == '0') {
            has_zero = true;
        } else if (s.at(i) == '+') {
            if (has_zero) {
                has_zero = false;
            } else {
                ++count;
            }
        }
    }

    if (!has_zero) {
        ++count;
    }

    return count;
}