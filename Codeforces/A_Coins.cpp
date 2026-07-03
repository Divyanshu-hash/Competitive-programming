#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long k;
        cin >> k;
        if(k==1) cout<<"YES"<<endl;

        else if(n%2!=0 && k%2==0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}