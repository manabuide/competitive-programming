#include <bits/stdc++.h>
#include <gtest/gtest.h>
using namespace std;
vector<long long> solve(int n, vector<long long> a);

TEST(SolveTest, Ex1) {
    int n = 3;
    vector<long long> answer(n);
    vector<long long> b = {2, 3, 1};

    answer = solve(n, {140, 180, 160});

    for (int i = 0; i < n; ++i) {
        EXPECT_EQ(answer.at(i), b.at(i));
    }
}

TEST(SolveTest, Ex2) {
    int n = 2;
    vector<long long> answer(n);
    vector<long long> b = {1, 2};

    answer = solve(n, {1000000000, 1});

    for (int i = 0; i < n; ++i) {
        EXPECT_EQ(answer.at(i), b.at(i));
    }
}

TEST(SolveTest, Ex3) {
    int n = 8;
    vector<long long> answer(n);
    vector<long long> b = {4, 5, 7, 8, 3, 1, 6, 2};

    answer = solve(n, {3, 1, 4, 15, 9, 2, 6, 5});

    for (int i = 0; i < n; ++i) {
        EXPECT_EQ(answer.at(i), b.at(i));
    }
}

struct student {
    long long number;
    long long height;
};

vector<long long> solve(int n, vector<long long> a) {
    vector<student> students;

    for (int i = 0; i < (int)a.size(); ++i) {
        student s;
        s.number = i + 1;
        s.height = a.at(i);
        students.push_back(s);
    }

    sort(students.begin(), students.end(),
         [](const student &s1, const student &s2) {
             return s1.height > s2.height;
         });

    vector<long long> answer;
    for (int i = 0; i < n; ++i) {
        answer.push_back(students.at(i).number);
    }

    return answer;
}