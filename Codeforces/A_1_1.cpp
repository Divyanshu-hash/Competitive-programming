#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        int ones = count(s.begin(), s.end(), '1');

        
        int maxi = ones;

        for (int i = 1; i < n - 1; i++) {
            if (s[i - 1] == '1' && s[i + 1] == '1') {
                if (s[i] == '0') {
                    s[i]='1';
                    maxi++;
                }
            }  
        }
        int mini = maxi;
        for (int i = 1; i < n - 1; i++) {
            if (s[i - 1] == '1' && s[i + 1] == '1') {
                if (s[i] == '1') {
                    s[i]='0';
                    mini--;
                }
            }
        }

        cout << mini << " " << maxi << "\n";
    }

    return 0;
}