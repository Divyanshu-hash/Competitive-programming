#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        long long c,k;
        cin >> n >> c >> k;

        vector<long long> a(n);
        for (int i=0;i<n;i++) cin>>a[i];

        sort(a.begin(), a.end());

        for (int i= 0;i <n;i++) {
            if (a[i]<= c) {
                
                long long use = min(k, c - a[i]);
                a[i] += use;   
                k -= use;      
                c += a[i];     
            } else {
                break;
            }
        }

        cout << c << "\n";
    }

    return 0;
}