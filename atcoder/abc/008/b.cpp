#include <bits/stdc++.h>
using namespace std;

int main() {
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

    return 0;
}