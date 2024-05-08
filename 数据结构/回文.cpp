#include <bits/stdc++.h>
using namespace std;

bool huiwen(const string& seq) {
    int n = seq.length();
    stack<char> s;
    for (int i = 0; i < n / 2; ++i) {
        s.push(seq[i]);
    }
    int start = (n % 2 == 0) ? n / 2 : n / 2 + 1;
    for (int i = start; i < n; ++i) {
        if (s.top() != seq[i])
            return false;
        s.pop();
    }

    return true;
}

int main() {
    string input;
    cin >> input;
    if (huiwen(input)) {
        cout << " Y " << endl;
    } else {
        cout <<" N " << endl;
    }

    return 0;
}