#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long a,b;
        cin >> a >> b;

        if(a==b) {
            cout <<0<<" "<<0<< endl;
            continue;
        }

        if(a==0 || b==0) {
            cout <<abs(a-b)<<" "<<0<< endl;
            continue;
        }

        long long ans = abs(a-b);
        long long move=min(a%ans, ans-a%ans);
        cout << ans << " " << move << endl;

    }
    return 0;
}