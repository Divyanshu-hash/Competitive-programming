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
        vector<long long> b(n);
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        int ans=0;
        vector<long long> a;
        a.push_back(b[0]);
        ans++;
        for(int i=1;i<n;i++){
            if(b[i-1]<=b[i]){
                ans++;
                a.push_back(b[i]);
            }
            else{
                ans+=2;
                a.push_back(b[i]);
                a.push_back(b[i]);
            }
        }
        cout<<ans<<"\n";
        for(int i=0;i<a.size();i++){
            cout<<a[i]<<" ";
        }
        cout<<"\n";
        

    }
    return 0;
}