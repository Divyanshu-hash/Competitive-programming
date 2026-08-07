#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<int> a(n);
        map<int,int> mpp;
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            mpp[a[i]]++;
            
            sum+=a[i];
                
        }
        if(mpp.size()==n){
            cout<<sum<<endl;
            continue;
        }

        int freq=0;
        int element=0;
        for(auto it:mpp){
            if(it.second>freq){
                freq=it.second;
                element=it.first;
            }
        }
        if(freq<=(n+1)/2){
            cout<<sum<<endl;
        }
        else{
            
            int rem=freq-(n-freq+2);
            int ans=sum-rem*element;
            cout<<ans<<endl;
        }

    }
    return 0;
}