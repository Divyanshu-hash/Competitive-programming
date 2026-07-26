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
        long long k;
        cin >> k;
        vector<long long> a(n);
        vector<long long> ans;
        vector<pair<long long, long long>> b;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if(a[i]%k==0) {
                ans.push_back(i+1);
            }
            b.push_back({a[i]%k, i+1});
        }
        sort(b.begin(), b.end(), [](auto &x, auto &y) {
            if (x.first != y.first)
                return x.first > y.first;   // larger remainder first
            return x.second < y.second;     // smaller index first
        });
        for (auto p : b) {
            if(p.first!=0) {
                ans.push_back(p.second);
            }
        }
        for (long long x : ans) {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}