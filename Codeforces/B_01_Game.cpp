#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        int cnt0=0;
        int cnt1=0;
        for(char c:s){
            if(c=='0') cnt0++;
            else cnt1++;
        }
        int ans=min(cnt0,cnt1);
        if(ans%2==0) cout << "NET" << endl;
        else cout << "DA" << endl;
    }
    return 0;
}