// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define err(v)				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 
    

void solve(){
    ll n; cin >> n;
    ll total = n*2;
    vector<ll> ans(n+n);
    ll got = 0;
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < n; j++){
            ll x; cin >> x;
            ans[i+j+1] = x;
        }
    }
    for(auto it: ans) got+=it;

    ll sum = (total*(total+1))/2;
    ans[0] = sum-got;
    
    for(auto it: ans) cout << it << ' ';
    cout << '\n';
    

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