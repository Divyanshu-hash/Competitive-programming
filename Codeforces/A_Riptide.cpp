#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        vector<int> a(3);
        cin >> a[0] >> a[1] >> a[2];

        int rounds = 0;

        while (true) {
            if (a[0] == a[1] || a[1] == a[2] || a[0] == a[2])
                break;

            int mn = min_element(a.begin(), a.end()) - a.begin();
            int mx = max_element(a.begin(), a.end()) - a.begin();

            a[mx]--;
            a[mn]++;

            rounds++;
        }

        cout << rounds << '\n';
    }

    return 0;
}