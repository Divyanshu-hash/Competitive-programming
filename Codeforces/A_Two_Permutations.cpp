#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;

        if(n==a && a==b) {
            cout<<"Yes"<<endl;
            continue;
        }
        int diff=n-a-b;
        if(diff<0 || diff==1 || diff==0) cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
    }
    return 0;
}