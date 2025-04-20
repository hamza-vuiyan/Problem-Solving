// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 
    

void solve(){
    ll n, k; cin >> n >> k;
    vector<ll> v(n);
    for(auto &i: v) cin >> i;
    sort(v.begin(), v.end(), greater<int>());

    ll count = 0;
    ll mn = LONG_LONG_MAX;
    ll ans = 0;
    for(ll i = 0; i < n; i++){
        mn = min(mn, v[i]);
        count++;
        ll strength = mn*count;
        if(strength >= k){
            count = 0;
            ans++;
        }
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