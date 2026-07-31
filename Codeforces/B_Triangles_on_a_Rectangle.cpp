#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long w,h;
        cin >> w >> h;

        long long k1;
        cin >> k1;
        vector<pair<long long,long long>> x1(k1);
        for (long long i = 0; i < k1; i++) {
            long long a;
            cin >> a;
            x1[i] = {a, 0};  
        }
        long long k2;
        cin >> k2;
        vector<pair<long long,long long>> x2(k2);
        for (long long i = 0; i < k2; i++) {
            long long a;
            cin >> a;
            x2[i] = {a, h};  
        }
        long long k3;
        cin >> k3;
        vector<pair<long long,long long>> y1(k3);
        for (long long i = 0; i < k3; i++) {
            long long a;
            cin >> a;
            y1[i] = {0, a};  
        }
        long long k4;
        cin >> k4;
        vector<pair<long long,long long>> y2(k4);
        for (long long i = 0; i < k4; i++) {
            long long a;
            cin >> a;
            y2[i] = {w, a};  
        }
        long long maxi=LLONG_MIN;

        pair<long long,long long> p1 = {x1[0].first, x1[0].second};
        pair<long long,long long> p2 = {x1[k1-1].first, x1[k1-1].second};
        for(long long i=0;i<k2;i++){
           pair<long long,long long> p3 = {x2[i].first, x2[i].second};
           long long area = abs(p1.first*(p2.second - p3.second) + p2.first*(p3.second - p1.second) + p3.first*(p1.second - p2.second));
           maxi = max(maxi, area);
        }
        
        pair<long long,long long> q1 = {x2[0].first, x2[0].second};
        pair<long long,long long> q2 = {x2[k2-1].first, x2[k2-1].second};
        for(long long i=0;i<k1;i++){
           pair<long long,long long> q3 = {x1[i].first, x1[i].second};
           long long area = abs(q1.first*(q2.second - q3.second) + q2.first*(q3.second - q1.second) + q3.first*(q1.second - q2.second));
           maxi = max(maxi, area);
        }

        pair<long long,long long> r1 = {y1[0].first, y1[0].second};
        pair<long long,long long> r2 = {y1[k3-1].first, y1[k3-1].second};
        for(long long i=0;i<k4;i++){
           pair<long long,long long> r3 = {y2[i].first, y2[i].second};
           long long area = abs(r1.first*(r2.second - r3.second) + r2.first*(r3.second - r1.second) + r3.first*(r1.second - r2.second));
           maxi = max(maxi, area);
        }
        pair<long long,long long> s1 = {y2[0].first, y2[0].second};
        pair<long long,long long> s2 = {y2[k4-1].first, y2[k4-1].second};
        for(long long i=0;i<k3;i++){
           pair<long long,long long> s3 = {y1[i].first, y1[i].second};
           long long area = abs(s1.first*(s2.second - s3.second) + s2.first*(s3.second - s1.second) + s3.first*(s1.second - s2.second));
           maxi = max(maxi, area);
        }
        cout<< maxi << "\n";


    }
    return 0;
}