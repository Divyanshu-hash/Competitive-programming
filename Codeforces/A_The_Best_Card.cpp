#include <bits/stdc++.h>
using namespace std;


bool check(int n){
    if(n<2){
        return false;
    }
    if(n==2){
        return true;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int  n;
        cin>>n;

        if(check(n+1)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}