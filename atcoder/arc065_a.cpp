#include <bits/stdc++.h>
using namespace std;

void answer_1(string S) {
    int len = S.size();

    while(true) {
        if(S.substr(len - 5, 5) == "dream") {
            len -= 5;
        } else if(S.substr(len - 5, 5) == "erase") {
            len -= 5;
        } else if(S.substr(len - 6, 6) == "eraser") {
            len -= 6;
        } else if(S.substr(len - 7, 7) == "dreamer") {
            len -= 7;
        } else {
            cout << "NO" << endl;
            break;
        }

        if(len <= 0) {
            cout << "YES" << endl;
            break;
        }
    }
}

void answer_2(string S) {
    S = regex_replace(S, regex("dreamer"), "");
    S = regex_replace(S, regex("eraser"), "");
    S = regex_replace(S, regex("dream"), "");
    S = regex_replace(S, regex("erase"), "");

    cout << (S == "" ? "YES" : "NO") << endl;
}

int main() {
    string S;
    cin >> S;

    //answer_1(S);
	answer_2(S);

    return 0;
}