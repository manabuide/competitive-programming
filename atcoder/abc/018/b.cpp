#include <bits/stdc++.h>
using namespace std;

int main() {
	string S;
	cin >> S;

	int N;
	cin >> N;

    string answer = S;
    for(int i = 0; i < N; i++) {
		int l, r;
		cin >> l >> r;

        string temp_str;
        for(int j = 0; j < l - 1; j++) {
            temp_str += answer[j];
        }

        string reverse_str;
        for(int j = l - 1; j < r; j++) {
            reverse_str += answer[j];
        }
        
		reverse(reverse_str.begin(), reverse_str.end());
        temp_str += reverse_str;

        for(int j = r; j < answer.size(); j++) {
            temp_str += answer[j];
        }
        answer = temp_str;
        temp_str = "";
    }

    cout << answer << endl;

    return 0;
}