// In The Name of Almighty Allah

#include <bits/stdc++.h>
#include <cstddef>
using namespace std;

#define ll      			long long
#define star    			cerr << "*\n"; 
#define cerrV(x)            for(auto it: x) cerr << it << ' '; cerr << '\n'; 
#define cerrI(i, x)         cerr << 'i' << " = " << x << '\n';
#define cerr(x)             cerr << x << '\n';
#define all(x)              x.begin(), x.end()
#define rall(x)             x.rbegin(), x.rend()
#define cerrPair(x)         for(auto it: x) cerr << it.first << ' ' << it.second << '\n';

void solve(){
    ll n, m; cin >> n >> m;
    vector<ll> v(n);
    vector<ll> p(m);

    for(auto &i: v) cin >> i;
    for(auto &i: p) cin >> i;

    sort(rall(v));

    ll ans = 0;
    ll l = 0;
    for(ll i = 0; i < n; i++){
        if(p[l] < p[v[i]-1]){
            ans+=p[l];
            l++;
        }
        else{
            ans+=p[v[i]-1];
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