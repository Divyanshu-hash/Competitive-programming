#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        string a, b;
        cin >> a >> b;

        int n = a.size();
        int m = b.size();

        int ans = n + m; // make both empty

        // Generate every substring of a
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {

                string s1 = a.substr(i, j - i + 1);

                // Generate every substring of b
                for (int x = 0; x < m; x++) {
                    for (int y = x; y < m; y++) {

                        string s2 = b.substr(x, y - x + 1);

                        if (s1 == s2) {
                            int cost =
                                i + (n - 1 - j) +
                                x + (m - 1 - y);

                            ans = min(ans, cost);
                        }
                    }
                }
            }
        }

        cout << ans << "\n";
    }

    return 0;
}