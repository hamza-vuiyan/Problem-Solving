// In The Name of Almighty Allah

#include <bits/stdc++.h>
#include <cstddef>
using namespace std;

#define ll      			long long
#define star    			cerr << "*\n"; 
#define cerrV(x)            for(auto it: x) cerr << it << ' '; cerr << '\n'; 
#define cerr(i, x)          cerr << 'i' << " = " << x << '\n';
#define sort(x)             sort(x.begin(), x.end())
#define cerrPair(x)         for(auto it: x) cerr << it.first << ' ' << it.second << '\n';

void solve(){
    ll n; cin >> n;
    
    vector<ll> v;
    for(ll i = 0; i < n; i++){
        ll x; cin >> x;
        if(i&1) v.push_back(x*(-1));
        else v.push_back(x);
    }

    map<ll,ll> mp;
    ll sum = v[0];
    mp[sum]++;
    for(ll i = 1; i < n; i++){
        sum+=v[i];
        mp[sum]++;
        if(mp[sum] > 1 or sum == 0){
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
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