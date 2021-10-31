#include <bits/stdc++.h>
#include <gtest/gtest.h>

using namespace std;

int solve(int a, int b, int c, int d, int e);

TEST(SolveTest, Ex1) { EXPECT_EQ(10, solve(1, 2, 3, 4, 5)); }

TEST(SolveTest, Ex2) { EXPECT_EQ(14, solve(1, 2, 3, 5, 8)); }

int solve(int a, int b, int c, int d, int e) {
    vector<int> t = {a, b, c, d, e};
    set<int> st;

    for (int i = 0; i < 5; ++i) {
        for (int j = i + 1; j < 5; ++j) {
            for (int k = j + 1; k < 5; ++k) {
                st.insert(t.at(i) + t.at(j) + t.at(k));
            }
        }
    }

    vector<int> v;
    for (auto itr = st.begin(); itr != st.end(); ++itr) {
        v.push_back(*itr);
    }

    sort(v.begin(), v.end(), [](const int &x, const int &y) { return x > y; });

    return v.at(2);
}