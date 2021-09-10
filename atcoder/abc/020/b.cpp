#include <bits/stdc++.h>
using namespace std;

int main() {
    string A, B;
    cin >> A >> B;

    string temp = A + B;
    int answer = stoi(temp);

    cout << answer * 2 << endl;

    return 0;
}