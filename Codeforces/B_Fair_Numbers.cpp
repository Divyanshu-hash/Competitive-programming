#include <bits/stdc++.h>
using namespace std;


int solve(long long n){
    long long x=n;
    long long digit=0;
    int cnt=0;
    while(x > 0){
        digit = x % 10;

        if(digit == 0){
            x /= 10;
            continue;
        }

        if(n % digit != 0)
            return 0;

        x /= 10;
    }

    return 1;
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;

        long long i = n;

        while(true){
            if(solve(i)){
                cout << i << "\n";
                break;
            }
            i++;
        }
        
    }
    return 0;
}