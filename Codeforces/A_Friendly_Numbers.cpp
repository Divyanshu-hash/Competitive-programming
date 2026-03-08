#include <bits/stdc++.h>
using namespace std;


int digitSum(long long n){
    int sum = 0;
    while(n){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long x;
        cin >> x;
        
        int count=0;
        for(long long y = x + 1; y <= x + 81; y++){
            if(y - digitSum(y) == x){
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}