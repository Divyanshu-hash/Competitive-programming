#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long a, b;
        cin >> a >> b;

        long long xk, yk;
        cin >> xk >> yk;

        long long xq, yq;
        cin >> xq >> yq;

        vector<pair<long long,long long>> moves = {
            { a, b}, { a,-b}, {-a, b}, {-a,-b},
            { b, a}, { b,-a}, {-b, a}, {-b,-a}
        };

        set<pair<long long,long long>> kingPos, queenPos;

        for (auto p : moves) {
            long long dx = p.first;
            long long dy = p.second;

            kingPos.insert({xk + dx, yk + dy});
            queenPos.insert({xq + dx, yq + dy});
        }

        int ans = 0;
        for (auto &p : kingPos) {
            if (queenPos.count(p))
                ans++;
        }

        cout << ans << "\n";
    }

    return 0;
}