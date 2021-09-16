#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
	cin >> str;

    str.erase(str.size() - 1, str.size());
    int str_size = str.size();

    int answer = 0;
    while(str_size > 2) {
        if(str_size % 2 != 0) {
            str.erase(str.size() - 1, str.size());
            str_size = str.size();

            continue;
        }

        int middle_index = str_size / 2;
        string str_head = str.substr(0, middle_index);
        string str_tail = str.substr(middle_index, str_size);

        if(str_head == str_tail) {
            answer = str_head.size();
            break;
        }

        str.erase(str_size - 1, str_size);
        str_size = str.size();
    }

    cout << str_size << endl;

    return 0;
}