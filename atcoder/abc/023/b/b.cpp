#include <bits/stdc++.h>
using namespace std;

string first_proccess(string accessary) { return "a" + accessary + "c"; }

string second_proccess(string accessary) { return "c" + accessary + "a"; }

string third_proccess(string accessary) { return "b" + accessary + "b"; }

void solve1() {
    int N;
    cin >> N;

    string S;
    cin >> S;

    string accessary = "b";

    int count = 0;
    int j = 0;
    for (int i = 0; S != accessary; i++) {
        if (j == 0) {
            accessary = first_proccess(accessary);
            count++;
            j++;
        } else if (j == 1) {
            accessary = second_proccess(accessary);
            count++;
            j++;
        } else if (j == 2) {
            accessary = third_proccess(accessary);
            count++;
            j = 0;
        }

        if (i == N) {
            count = 0;
            break;
        }
    }

    if (count == 0) {
        cout << -1 << endl;
    } else {
        cout << count << endl;
    }
}

void solve2() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int answer = -1;

    if (n == 1 && s.at(0) == 'b') {
        cout << 0 << "\n"s;
        return;
    }

    if (n % 2 == 0) {
        cout << answer << "\n"s;
        return;
    }

    for (int i = 0; i < n; ++i) {
        if (s.at(i) != 'a' && s.at(i) != 'b' && s.at(i) != 'c') {
            cout << answer << "\n"s;
            return;
        }
    }

    string result = "b"s;

    for (int x = 1; x <= 100; ++x) {
        if (x % 3 == 1) {
            result.insert(0, "a"s);
            result.insert(result.end(), 'c');
        } else if (x % 3 == 2) {
            result.insert(0, "c"s);
            result.insert(result.end(), 'a');
        } else if (x % 3 == 0) {
            result.insert(0, "b"s);
            result.insert(result.end(), 'b');
        }
        if (s == result) {
            answer = x;
            break;
        }
    }

    cout << answer << "\n"s;
}

int main() { return 0; }