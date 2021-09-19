#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
	cin >> n;

    string s;
	cin >> s;

    int max_count = 0;
    for(int s_index = 1; s_index < s.size(); s_index++) {
        vector<bool> alphabet_x(26, false), alphabet_y(26, false);
        string x = s.substr(0, s_index), y = s.substr(s_index);

        for(auto c : x) {
            alphabet_x[c - 'a'] = true;
        }

        for(auto c : y) {
            alphabet_y[c - 'a'] = true;
        }

        int count = 0;
        for(int index = 0; index < 26; index++) {
            if(alphabet_x[index] && alphabet_y[index]) {
                count++;
            }
        }

        max_count = max(max_count, count);
    }

    cout << max_count << endl;

    return 0;
}