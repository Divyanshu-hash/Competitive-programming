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

        vector<int> p(3*n);
        for (int i = 0; i < 3*n; i++) {
            p[i] = i + 1;
        }

        for (int i = 0; i < n; i++) {
            cout << p[i] << " " 
                 << p[n + 2*i] << " " 
                 << p[n + 2*i + 1] << " ";
        }
        cout << "\n";
    }

    return 0;
}