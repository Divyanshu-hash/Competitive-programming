#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n,m;
        cin >> n >> m;
        vector<vector<int>> a(n, vector<int>(m));
        int cnt=0;
        int sum=0;
        int mini=INT_MAX;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin >> a[i][j];
                if(a[i][j]<=0){
                    cnt++;
                }
                if(abs(a[i][j])<mini){
                    mini=abs(a[i][j]);
                }
                sum+=abs(a[i][j]);
            }
        }
        if(cnt % 2 == 1){
            sum -= 2*mini;
        }
        cout << sum << "\n";
    }
    return 0;
}