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
        vector<int> a(n-1);
        int total=0;
        
        for(int i=0;i<n-1;i++){
            cin>>a[i];
            total+=a[i];
        }
        
        cout<<total*-1<<endl;

        
    }
    return 0;
}