#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long x,n;
        cin >> x >> n;
        long long sum;
        long long final_sum;
        if(n%4==0){
            sum=0;
        }
        else if(n%4==1){
            sum=n;
        }
        else if(n%4==2){
            sum=-1;
        }
        else if(n%4==3){
            sum=-(n+1);
        }

        if(x%2!=0){
            final_sum = sum + x;
        }
        else{
            final_sum = x-sum;
        }
        cout << final_sum << endl;    

    }
    return 0;
}