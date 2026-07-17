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

        if (n % 4 == 0) {
            for (int i = 2; i <= n; i++)
                cout << i << " ";
            cout << 1 << "\n";
        } else {
            cout << 2 << " " << 1 << " ";
            for (int i = 4; i <= n; i += 4) {
                cout << i + 1 << " " << i << " "
                     << i + 3 << " " << i + 2 << " ";
            }
            cout << "\n";
        }
    }

    return 0;
}