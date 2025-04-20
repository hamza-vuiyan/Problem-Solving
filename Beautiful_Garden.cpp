// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 
    

void solve(){
    ll n, k, d; cin >> n >> k >> d;
    vector<ll> v(n);
    for(auto &i: v) cin >> i;
    sort(v.begin(), v.end());

    ll ans = 0;

    for(int i = 0; i < n-k; i++){
        ans+=ceil((d*1.00)/v[i]);
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