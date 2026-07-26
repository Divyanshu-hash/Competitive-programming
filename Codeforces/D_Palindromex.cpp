#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> a;

int solve(int l, int r) {
    set<int> mex;

    for (int i = 0; i <= n; i++)
        mex.insert(i);

    while (l >= 0 && r < 2 * n && a[l] == a[r]) {
        mex.erase(a[l]);
        l--;
        r++;
    }

    return *mex.begin();
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        cin >> n;

        a.resize(2 * n);

        int firstZero = -1, secondZero = -1;

        for (int i = 0; i < 2 * n; i++) {
            cin >> a[i];
            if (a[i] == 0) {
                if (firstZero == -1)
                    firstZero = i;
                else
                    secondZero = i;
            }
        }

        cout << max({
            solve(firstZero, firstZero),
            solve(secondZero, secondZero),
            solve((firstZero + secondZero) / 2,
                  (firstZero + secondZero + 1) / 2)
        }) << '\n';
    }

    return 0;
}