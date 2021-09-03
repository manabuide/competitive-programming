#include <bits/stdc++.h>
using namespace std;

void add_maximum_value(int &name, vector<int> &a) {
    vector<int>::iterator iter = max_element(a.begin(), a.end());
    size_t index = distance(a.begin(), iter);
    name += a[index];
    a.erase(a.begin() + index);
}

int main() {
    int N;
    cin >> N;

    vector<int> a;
    for(int i = 0; i < N; i++) {
        int tmp = 0;
        cin >> tmp;
        a.push_back(tmp);
    }

    int Alice = 0, Bob = 0;
    bool odd = true;
    while(true) {
        if(odd) {
            add_maximum_value(Alice, a);
            odd = false;
        } else {
            add_maximum_value(Bob, a);
            odd = true;
        }
        if(a.size() == 0) {
            break;
        }
    }

    cout << Alice - Bob << endl;

    return 0;
}