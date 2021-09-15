#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
	cin >> str;

    set<char> st;

    for(int str_index = 0; str_index < str.size(); str_index++) {
        st.insert(str[str_index]);
    }

    if(st.size() == str.size()) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }

    return 0;
}