#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        if (s.front() != s.back())
            s.front() = s.back();   // or s.back() = s.front();

        cout << s << "\n";
    }
}