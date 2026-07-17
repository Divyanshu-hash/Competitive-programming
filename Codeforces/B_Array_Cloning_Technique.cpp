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
        vector<long long> a(n);
        map<long long, int> freq;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            freq[a[i]]++;
        }
        int maxi=-1;
        for(auto it: freq) {
            if(it.second > maxi) {
                maxi = it.second;
            }
        }
        int cnt=0;
        int replace=n-maxi;
        int elementToReplace = replace;
        \
        for(int i=1;i<=elementToReplace;i++) {
            if(replace>0){
                replace-=maxi;
                maxi*=2;
                cnt++;
            }
            else{
                break;
            }
        }
        cout<<elementToReplace+cnt<<endl;

    }
    return 0;
}