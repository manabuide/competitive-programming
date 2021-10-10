#include <bits/stdc++.h>
using namespace std;
using namespace std::literals;

void solve1() {
    int N;
    cin >> N;

    map<string, int> members;
    string answer, str;

    while (N--) {
        cin >> str;
        members[str]++;

        if (answer.empty() || members[str] > members[answer]) {
            answer = str;
        }
    }

    cout << answer << endl;
}

void solve2() {
    int n;
    std::cin >> n;
    std::multiset<std::string> ms;

    for (int i = 0; i < n; ++i) {
        std::string s;
        std::cin >> s;
        ms.insert(s);
    }

    std::string name;
    unsigned int max_count = 0;
    for (auto iter = std::begin(ms); iter != std::end(ms); ++iter) {
        if (max_count < ms.count(*iter)) {
            max_count = ms.count(*iter);
            name = *iter;
        }
    }

    std::cout << name << "\n"s;
}

int main() { return 0; }