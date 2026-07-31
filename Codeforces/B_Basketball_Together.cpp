#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    
    int n;
    cin >> n;
    long long D;
    cin >> D;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a.begin(), a.end(), greater<long long>());

    long long ans = 0;
    int i=0;
    int j=n-1;
    while (i <=j) {
        if (a[i]<=D) {
            if(D%a[i]!=0) {
                long long no=(D+a[i]-1)/a[i];
                j-=no-1;
                if(j<i) {
                    break;
                }
            } else {
                j -= D/a[i];
                if(j<i) {
                    break;
                }
            }
            ans++;
        }
        else if(a[i]>D) {
            ans++;
        }
        i++;
    }
    cout << ans << endl;

    return 0;
}