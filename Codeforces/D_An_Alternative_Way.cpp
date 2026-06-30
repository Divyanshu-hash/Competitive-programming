#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n + 1), b(n + 1);
        for (int i = 1; i <= n; i++) cin >> a[i];
        for (int i = 1; i <= n; i++) cin >> b[i];

        long long P = 0, N = 0;
        long long prevDelta = 0;
        bool ok = true;

        for (int p = 1; p <= n; p++) {
            long long diff = b[p] - a[p];
            long long sign = (p % 2 == 0) ? 1 : -1;
            long long delta = diff * sign;
            long long dD = delta - prevDelta;
            prevDelta = delta;

            if (p % 2 == 0) {
                if (dD >= 0) {
                    P += dD;
                } else {
                    if (P < -dD) { ok = false; break; }
                    P += dD; 
                }
            } else {
                if (dD <= 0) {
                    N += (-dD);
                } else {
                    if (N < dD) { ok = false; break; }
                    N -= dD;
                }
            }
        }

        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}