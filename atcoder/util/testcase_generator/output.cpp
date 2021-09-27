#include <bits/stdc++.h>
#include <filesystem>
using namespace std;

void solve() {
}

int main() {
    int file_number;
    cin >> file_number;

    for(int i = 0; i < file_number; i++) {
        string input_file_name = "input_" + to_string(i) + ".txt";
        string output_file_name = "output_" + to_string(i) + ".txt";

        ifstream ifstr(input_file_name);
        cin.rdbuf(ifstr.rdbuf());

        ofstream ofstr(output_file_name);
        streambuf *strbuf;
        strbuf = cout.rdbuf(ofstr.rdbuf());

        solve();

        cout << "\n----------\n" << endl;

        string str;
        ifstream ifstr2(input_file_name);
        while(getline(ifstr2, str)) {
            cout << str << endl;
        }

        cout.rdbuf(strbuf);
    }

    return 0;
}