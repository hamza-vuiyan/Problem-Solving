// In The Name of Almighty Allah

#include <bits/stdc++.h>
#include <cstddef>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 
    

void solve(){
    int n; cin >> n;
    vector<int> v(n);
    for(auto &i: v) cin >> i;
    int l = 1, r = n-2;
       
    while(l < r){
        int pvc = 0;
        int afc = 0;
        if(v[l]==v[l-1]) pvc++;
        if(v[r]==v[r+1]) pvc++;

        if(v[l-1] == v[r]) afc++;
        if(v[r+1] == v[l]) afc++;

        if(afc < pvc) swap(v[l], v[r]);
        l++; r--;
    }

    int ans = 0;
    for(int i = 0; i < n-1; i++){
        if(v[i]==v[i+1]) ++ans;
    }
    cout << ans << '\n';
}

signed main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}