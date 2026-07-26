#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {

        int n, p;
        cin >> n >> p;

        vector<int> a(n), b(n);

        for (int &x : a) cin >> x;
        for (int &x : b) cin >> x;

        vector<pair<int,int>> v;

        for (int i = 0; i < n; i++)
            v.push_back({b[i], a[i]});

        sort(v.begin(), v.end());

        long long ans = 1LL * n * p;

        int remaining = n - 1;

        for (auto it : v) {
            int cost = it.first;
            int cap = it.second;

            if (remaining == 0) break;

            if (cost >= p) break;

            int use = min(cap, remaining);

            ans -= 1LL * use * (p - cost);

            remaining -= use;
        }

        cout << ans << '\n';
    }
    return 0;
}