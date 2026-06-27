#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<int> p(n);
        for(int i=0;i<n;i++) cin>>p[i];
        for (int i = 0; i < n; i++) {
            if (n == 1) cout << 1 << " ";
            else cout << 2 << " ";
        }
        cout << "\n";
    }

    return 0;
}
