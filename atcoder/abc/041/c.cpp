#include <bits/stdc++.h>
using namespace std;

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

int main() {
    int n;
    cin >> n;

    vector<long long> a;
    for (int i = 0; i < n; ++i) {
        long long temp;
        cin >> temp;

        a.push_back(temp);
    }

    vector<long long> answer;
    answer = solve(n, a);

    for (auto ans : answer) {
        cout << ans << "\n"s;
    }

    return 0;
}