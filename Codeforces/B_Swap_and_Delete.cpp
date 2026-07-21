#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n=s.size();
        int cnt0=0;
        int cnt1=0;
        for(char &c:s){
            if(c=='0') cnt0++; 
            else cnt1++;
        }
        string t;
        int i=0;
        while(i<n){
            if(s[i]=='1'){
                if (cnt0 == 0) break;
                t+='0';
                cnt0--;
            }else{
                if (cnt1 == 0) break;
                t+='1';
                cnt1--;
            }
            i++;
        }
        cout << n-t.size()<< endl;
    }
    return 0;
}