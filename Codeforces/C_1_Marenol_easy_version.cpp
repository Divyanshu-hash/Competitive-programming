#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        string a, b;
        cin >> a >> b;

        int evenA = 0, oddA = 0;
        int evenB = 0, oddB = 0;

        for (int i = 0; i < n; i++) {
            if (a[i] == '1') {
                if (i % 2) oddA++;
                else evenA++;
            }
            if (b[i] == '1') {
                if (i % 2) oddB++;
                else evenB++;
            }
        }

        cout << (evenA == evenB && oddA == oddB ? "YES" : "NO") << '\n';
    }

    return 0;
}