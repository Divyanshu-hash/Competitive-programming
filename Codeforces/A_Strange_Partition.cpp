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
        long long x = 0;
        cin >> x;
        vector<long long> a(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        long long sum=0;
        long long maxi=0;
        for(long long val:a){
            maxi+=(val+x-1)/x;
            sum+=val;
        }
        long long mini=(sum+x-1)/x;

        cout << mini << " " << maxi << "\n";
    }
    return 0;
}