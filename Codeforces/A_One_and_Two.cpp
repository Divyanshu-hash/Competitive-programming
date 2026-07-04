#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);

        int totalTwos = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] == 2)
                totalTwos++;
        }

        if (totalTwos % 2) {
            cout << -1 << '\n';
            continue;
        }

        if (totalTwos == 0) {
            cout << 1 << '\n';
            continue;
        }

        int cnt = 0;

        for (int i = 0; i < n - 1; i++) {
            if (a[i] == 2)
                cnt++;

            if (cnt == totalTwos / 2) {
                cout << i + 1 << '\n';
                break;
            }
        }
    }
}