// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 
    

void solve(){
    ll n; cin >> n;
    vector<ll> v(n);
    for(auto &i: v) cin >> i;
    map<int, int> mp;
    for(int i = 0; i < n; i++){
        mp[v[i]]++;
    }
    int ans = 0;
    for(auto it: mp){
        ans+=(it.second/2);
    }
    cout << ans << '\n';
}

signed main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--){
        solve();
    }
}