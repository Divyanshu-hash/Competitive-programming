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
        vector<int> b;
        vector<int> c;
        vector<int> d;
        vector<int> e;

        for(int i=0;i<n;i++){
            cin >> a[i];
            if(a[i]%6==0) b.push_back(a[i]);
            else if(a[i]%2==0) c.push_back(a[i]);
            else if(a[i]%3==0) d.push_back(a[i]);
            else e.push_back(a[i]);
        }
        for(int i=0;i<c.size();i++){
            b.push_back(c[i]);
        }
        
        for(int i=0;i<e.size();i++){
            b.push_back(e[i]);
        }
        for(int i=0;i<d.size();i++){
            b.push_back(d[i]);
        }

        for(int i=0;i<b.size();i++){
            cout << b[i] << " ";
        }
        cout << "\n";

    }
    return 0;
}