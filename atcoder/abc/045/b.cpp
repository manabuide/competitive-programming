#include <bits/stdc++.h>
using namespace std;

void print_queue(queue<char> q) {
    while(!q.empty()) {
        cout << q.front();
        q.pop();
    }
    
	return;
}

int main() {
    queue<char> q[3];
    for(int i = 0; i < 3; i++) {
        string s;
        cin >> s;

        for(int j = 0; j < s.size(); j++) {
            q[i].push(s[j]);
        }
    }

	char win;
    char turn = q[0].front();
    q[0].pop();

    while(true) {
        if(turn == 'a') {
            if(q[0].empty()) {
				win = 'A';
                break;
            }
            turn = q[0].front();
            q[0].pop();
        } else if(turn == 'b') {
            if(q[1].empty()) {
				win = 'B';
                break;
            }
            turn = q[1].front();
            q[1].pop();
        } else if(turn == 'c') {
            if(q[2].empty()) {
				win = 'C';
                break;
            }
            turn = q[2].front();
            q[2].pop();
        }
    }

	cout << win << endl;

    return 0;
}