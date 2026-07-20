#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin >> n >> k;
        int pick=(n+1)/2;
        vector<long long> a(n*k);
        for(int i=0;i<n*k;i++){
            cin >> a[i];
        }
        long long sum=0;
        int pointer=n*k;
        while(k--){
            pointer -= (n / 2 + 1);
            sum += a[pointer];
        }
        cout << sum << "\n";

    }
    return 0;
}