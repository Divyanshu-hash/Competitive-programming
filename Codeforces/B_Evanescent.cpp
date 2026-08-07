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
        string s;
        cin >> s;

        int runs = 1;
        for (int i = 1; i < n; i++)
            if (s[i] != s[i - 1])
                runs++;

        int ans = INT_MAX;

        for (int i = 1; i <= n - 2; i++) {
            int oldEdges = (s[i - 1] != s[i]) + (s[i] != s[i + 1]);
            int newEdge = (s[i - 1] != s[i + 1]);
            ans = min(ans, runs - oldEdges + newEdge);
        }

        cout << ans << "\n";
    }

    return 0;
}