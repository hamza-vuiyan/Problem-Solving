// In The Name of Almighty Allah

#include <bits/stdc++.h>
#include <cstddef>
using namespace std;

#define ll      			long long
#define star    			cerr << "*\n"; 
#define cerrV(x)            for(auto it: x) cerr << it << ' '; cerr << '\n'; 
#define cerr(i, x)          cerr << 'i' << " = " << x << '\n';
#define all(x)              x.begin(), x.end()
#define rall(x)             x.rbegin(), x.rend()
#define cerrPair(x)         for(auto it: x) cerr << it.first << ' ' << it.second << '\n';

void solve(){
    ll n, a, b; cin >> n >> a >> b;
    vector<ll> v(n);

    map<pair<ll,ll>, ll> mp;

    for(ll i = 0; i < n; i++){
        ll x; cin >> x;
        v[i] = x;
    }

    ll ans = 0;
    for(auto it: v){
        ll k = (a - (it%a))%a;
        ll l = it%b;
        ans+=mp[{k ,l}];
        mp[{it%a, it%b}]++;    
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