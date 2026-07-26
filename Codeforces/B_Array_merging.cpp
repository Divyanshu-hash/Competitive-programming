#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n), b(n);

        vector<int> bestA(2 * n + 1, 0);
        vector<int> bestB(2 * n + 1, 0);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < n; i++)
            cin >> b[i];

        // Longest run in a
        int i = 0;
        while (i < n) {
            int j = i;
            while (j < n && a[j] == a[i])
                j++;

            bestA[a[i]] = max(bestA[a[i]], j - i);
            i = j;
        }

        // Longest run in b
        i = 0;
        while (i < n) {
            int j = i;
            while (j < n && b[j] == b[i])
                j++;

            bestB[b[i]] = max(bestB[b[i]], j - i);
            i = j;
        }

        int ans = 0;

        for (int val = 1; val <= 2 * n; val++) {
            ans = max(ans, bestA[val] + bestB[val]);
        }

        cout << ans << "\n";
    }

    return 0;
}