// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 
    

void solve(){
    ll n, k; cin >> n >> k;
    vector<pair<ll,ll>> vp;
    map<ll, ll> mp;
    while (n--){
        ll i; cin >> i;
        mp[i]++;
    } 
    for(auto &i: mp){
        vp.push_back({i.second, i.first});
    }
    sort(vp.begin(), vp.end());
    for(int i = 0; i < vp.size(); i++){
        if(vp[i].first <= k) k-=vp[i].first;
        else{
            cout << (vp.size() - i) << '\n';
            return;
        }
    }
    cout << 1 << '\n';
    
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