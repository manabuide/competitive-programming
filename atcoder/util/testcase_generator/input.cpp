#include <bits/stdc++.h>
using namespace std;

long long set_random_integer_value(long long min, long long max) {
    random_device rndd;
    mt19937 mt(rndd());
    uniform_int_distribution<> rnd(min, max);

    return rnd(mt);
}

void generater_max_integer_value(long long max) { cout << max << endl; }

void generater_min_integer_value(long long min) { cout << min << endl; }

void generate_random_integer_value(long long min, long long max) {
    cout << set_random_integer_value(min, max) << endl;
}

void generate_boundary_integer_array(long long n, long long min,
                                     long long max) {
    for(int i = 0; i < n; i++) {
        if(i == 0) {
            cout << min;
        } else if(i == n - 1) {
            cout << max;
        } else if(i == 1) {
            cout << min + 1;
        } else if(i == 2) {
            cout << min + 2;
        } else if(i == n - 2) {
            cout << max - 1;
        } else if(i == n - 3) {
            cout << max - 2;
        } else {
            cout << set_random_integer_value(min, max);
        }

        if(i == n - 1) {
            cout << endl;
        } else {
            cout << " ";
        }
    }
}

void generate_random_integer_array(long long n, long long min, long long max,
                                   bool duplication) {
    vector<long long> array;

    if(!duplication && n > max - min) {
        cout << "-1" << endl;

        return;
    }

    for(int i = 0; i < n; i++) {
        if(duplication) {
            array.push_back(set_random_integer_value(min, max));
        } else {
            while(true) {
                long long x = set_random_integer_value(min, max);
                bool is_duplicated = false;

                for(int j = 0; j < array.size(); j++) {
                    if(x == array[j]) {
                        is_duplicated = true;
                        break;
                    }
                }

                if(!is_duplicated) {
                    array.push_back(x);
                    break;
                }
            }
        }
    }

    for(int i = 0; i < array.size(); i++) {
        cout << array[i];

        if(i == n - 1) {
            cout << endl;
        } else {
            cout << " ";
        }
    }
}

void generate_random_digit_string(int n, bool new_line) {
    for(int i = 0; i < n; i++) {
        cout << char(set_random_integer_value(0, 9) + '0');
    }

    if(new_line) {
        cout << endl;
    }
}

void generate_random_lower_string(int n) {
    for(int i = 0; i < n; i++) {
        cout << char(set_random_integer_value(0, 25) + 'a');
    }
    cout << endl;
}

void generate_random_upper_string(int n) {
    for(int i = 0; i < n; i++) {
        cout << char(set_random_integer_value(0, 25) + 'A');
    }
    cout << endl;
}

void generate_random_string(int n) {
    for(int i = 0; i < n; i++) {
        int x = set_random_integer_value(0, 20);

        if(x < 10) {
            cout << char(set_random_integer_value(0, 25) + 'A');
        } else {
            cout << char(set_random_integer_value(0, 25) + 'a');
        }
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        string file_name;
        file_name += "input_" + to_string(i) + ".txt";
        ofstream ofstr(file_name.c_str());
        streambuf *strbuf = cout.rdbuf(ofstr.rdbuf());

        cout.rdbuf(strbuf);
    }

    return 0;
}