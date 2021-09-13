#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    
	string answer;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '0') {
            answer += '0';
        } else if(s[i] == '1') {
            answer += '1';
        } else if(s[i] == 'B' && !answer.empty()) {
			answer = answer.erase(answer.size() - 1);
        }
    }

    cout << answer << endl;

    return 0;
}