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
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        if(n%2==0){
            int exor=0;
            for(int i=0;i<n;i++){
                exor^=a[i];
            }
            if(exor==0) cout<<"0"<<endl;
            else cout<<"-1"<<endl;
        }
        else{
            int exor=0;
            for(int i=0;i<n;i++){
                exor^=a[i];
            }
            cout<<exor<<endl;
        }
    }
    return 0;
}