#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int answer = 0;
    int a = 0, z = 0;

	int i = 0;
	while (s[i] != 'A') {
		i++;
    }

	a = i;
	i = s.size();
	while (s[i] != 'Z') {
		i--;
	}

	z = i;
    
	cout << z - a + 1 << endl;
    
	return 0;
}