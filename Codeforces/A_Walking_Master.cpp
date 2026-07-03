#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long a,b,c,d;
        cin>>a>>b>>c>>d;
        
        if(d<b ){
            cout<<"-1"<<endl;
            continue;
        }
        long long y=d-b;
        long long newx=a+y;
        if(newx<c){
            cout<<"-1"<<endl;
            continue;
        }
        long long x=newx-c;
        cout<<y+x<<endl;

        

    }
    return 0;
}