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

        vector<long long> a(n);

        for(int i = 0; i < n; i++)
            cin >> a[i];

        // Movement must be:
        // -> <- -> <- ...
        // Therefore n must be even
        if(n % 2 == 1) {
            cout << "NO\n";
            continue;
        }

        long long maxEven = LLONG_MIN;
        long long minOdd = LLONG_MAX;

        for(int i = 0; i < n; i++) {

            // 0-based even = 1-based odd
            // Must move RIGHT => a[i] > k
            if(i % 2 == 0) {
                minOdd = min(minOdd, a[i]);
            }

            // 0-based odd = 1-based even
            // Must move LEFT => a[i] < k
            else {
                maxEven = max(maxEven, a[i]);
            }
        }

        // Need:
        // maxEven < k < minOdd
        //
        // Since k is integer, there must be at least
        // one integer strictly between them.
        if(maxEven + 1 < minOdd)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}