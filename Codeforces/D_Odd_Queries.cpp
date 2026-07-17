#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, q;
        cin >> n >> q;

        vector<long long> a(n + 1), prefix(n + 1, 0);

        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            prefix[i] = prefix[i - 1] + a[i];
        }

        long long sum = prefix[n];

        while (q--) {
            int l, r;
            long long k;
            cin >> l >> r >> k;

            long long removeSum = prefix[r] - prefix[l - 1];
            long long rangeSum = 1LL * (r - l + 1) * k;

            long long newSum = sum - removeSum + rangeSum;

            if (newSum & 1)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }

    return 0;
}