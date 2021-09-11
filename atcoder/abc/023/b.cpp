#include <bits/stdc++.h>
using namespace std;

string first_proccess(string accessary) { return "a" + accessary + "c"; }

string second_proccess(string accessary) { return "c" + accessary + "a"; }

string third_proccess(string accessary) { return "b" + accessary + "b"; }

int main() {
    int N;
    cin >> N;

    string S;
    cin >> S;

    string accessary = "b";

    int count = 0;
    int j = 0;
    for (int i = 0; S != accessary; i++) {
        if(j == 0) {
            accessary = first_proccess(accessary);
            count++;
            j++;
        } else if(j == 1) {
            accessary = second_proccess(accessary);
            count++;
            j++;
        } else if(j == 2) {
            accessary = third_proccess(accessary);
            count++;
            j = 0;
        }
        
        if (i == N) {
            count = 0;
            break;
        }
    }

    if(count == 0) {
        cout << -1 << endl;
    } else {
        cout << count << endl;
    }

    return 0;
}