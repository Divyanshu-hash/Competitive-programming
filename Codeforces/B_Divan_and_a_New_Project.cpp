#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        vector<pair<long long,int>> a;

        for (int i = 1; i <= n; i++) {
            long long x;
            cin >> x;
            a.push_back({x,i});
        }

        sort(a.begin(), a.end(), greater<pair<long long,int>>());

        vector<long long> pos(n+1);

        pos[0]=0;

        long long ans=0;
        long long d=1;

        for(int i=0;i<n;i++){
            if(i&1)
                pos[a[i].second]=-d++;
            else
                pos[a[i].second]=d;

            ans+=2LL*abs(pos[a[i].second])*a[i].first;
        }

        cout<<ans<<"\n";

        for(int i=0;i<=n;i++)
            cout<<pos[i]<<" ";
        cout<<"\n";
    }
}