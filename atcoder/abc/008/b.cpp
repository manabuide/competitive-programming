#include <bits/stdc++.h>
using namespace std;

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

int main() { return 0; }