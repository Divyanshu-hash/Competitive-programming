#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long a;
        cin >> a;
        long long b;
        cin >> b;
        long long c;
        cin >> c;

        long long anna=a+(c+2-1)/2;
        long long kaite=b+(c-(c+2-1)/2);

        if(anna>kaite){
            cout<<"First\n";
        }
        else cout<<"Second\n";
        

        
    }
    return 0;
}