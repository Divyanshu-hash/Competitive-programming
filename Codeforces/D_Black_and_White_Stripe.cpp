#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        int white = 0;

        // Count whites in the first window
        for (int i = 0; i < k; i++) {
            if (s[i] == 'W') white++;
        }

        int ans = white;

        // Slide the window
        for (int i = k; i < n; i++) {
            if (s[i - k] == 'W') white--;
            if (s[i] == 'W') white++;
            ans = min(ans, white);
        }

        cout << ans << '\n';
    }

    return 0;
}