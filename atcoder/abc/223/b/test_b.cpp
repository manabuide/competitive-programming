#include <bits/stdc++.h>
#include <gtest/gtest.h>
using namespace std;

vector<string> solve(string s);

TEST(SolveTest, Ex1) {
    vector<string> s = solve("aaba"s);

    EXPECT_EQ("aaab"s, s.at(0));
    EXPECT_EQ("baaa"s, s.at(1));
}

TEST(SolveTest, Ex2) {
    vector<string> s = solve("z"s);

    EXPECT_EQ("z"s, s.at(0));
    EXPECT_EQ("z"s, s.at(1));
}

TEST(SolveTest, Ex3) {
    vector<string> s = solve("abracadabra"s);

    EXPECT_EQ("aabracadabr"s, s.at(0));
    EXPECT_EQ("racadabraab"s, s.at(1));
}

vector<string> solve(string s) {
    int count = s.size();
    string rotating = s;
    vector<string> v;
    string max_str = s, min_str = s;

    while (count) {
        int rotating_size = rotating.size();
        char left_temp = rotating.at(0);
        for (int i = 0; i < rotating_size - 1; ++i) {
            rotating.at(i) = rotating.at(i + 1);
        }
        rotating.at(rotating_size - 1) = left_temp;
        if (rotating < min_str) {
            min_str = rotating;
        }

        if (rotating > max_str) {
            max_str = rotating;
        }
        --count;
    }
    vector<string> answer = {min_str, max_str};

    return answer;
}