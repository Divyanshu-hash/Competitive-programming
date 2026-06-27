#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        int k;
        cin>>k;
        vector<int> a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];

        int maxi=a[0];
        for(int i=1;i<n;i++){
            if(a[i]-a[i-1]>maxi)
                maxi=a[i]-a[i-1];
        }
        if(maxi<2*(k-a[n-1]))
            maxi=2*(k-a[n-1]);
        cout<<maxi<<"\n";
    }
    return 0;
}