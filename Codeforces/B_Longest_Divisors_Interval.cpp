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
        long long cnt = 0, maxi = 0;

        for(int i=1;i<=50;i++){
            if(n%i==0){
                cnt++;
                
            } else {
                cnt=0;
            }
            maxi=max(maxi,cnt);
        }
        cout << maxi << endl;
    }
    return 0;
}