#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long a,b;
        cin >> a >> b;
        int mini=INT_MAX;
        for(int i=0;i<=100;i++){
            long long temp1=a;
            long long temp2=b;
            int cnt=0;

            if(temp2==1){
                temp2++;
                cnt++;
            }
            temp2+=i;
            cnt+=i;

            

            while(temp1>0){
                temp1=temp1/temp2;
                cnt++;
            }
            mini=min(mini,cnt);
        }
        
        cout << mini << "\n";
    }
    return 0;
}