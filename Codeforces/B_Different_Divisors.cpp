#include <bits/stdc++.h>
using namespace std;

bool isPrime(long long n) {
    if (n < 2) return false;
    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long d;
        cin >> d;

        long long p = d + 1;
        while (!isPrime(p)) p++;

        long long q = p + d;
        while (!isPrime(q)) q++;

        cout << min(p * q, p * p * p) << '\n';
    }
}