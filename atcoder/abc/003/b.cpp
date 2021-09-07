#include <bits/stdc++.h>
using namespace std;

bool contains_atcards(char c) {
    char atcards[7] = {'a', 't', 'c', 'o', 'd', 'e', 'r'};

    for(int i = 0; i < 7; i++) {
        if(c == atcards[i]) {
            return true;
        }
    }

    return false;
}

int main() {

    string S, T;
    cin >> S >> T;

    bool can_win = true;
    for(int i = 0; i < S.size(); i++) {
        if(S[i] == '@' && T[i] == '@') {
            continue;
        }

        if(S[i] != T[i]) {
            if(S[i] == '@' && contains_atcards(T[i])) {
                can_win = true;
            } else if(contains_atcardsjk(S[i]) && T[i] == '@') {
                can_win = true;
            } else {
                can_win = false;
                break;
            }
        }
    }

    cout << (can_win ? "You can win" : "You will lose") << endl;

    return 0;
}