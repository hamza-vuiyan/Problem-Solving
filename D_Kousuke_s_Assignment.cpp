// In The Name of Almighty Allah

#include <bits/stdc++.h>
#include <cstddef>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 
    

void solve(){
    ll n; cin >> n;
	vector<ll> v(n);
	for(auto &i: v) cin >> i;

    map<ll,ll> mp;
    ll ans = 0;
    ll sum = 0;
	for(ll i = 0; i < n; i++){
       mp[0] = 1;
       sum+=v[i];
       mp[sum]++;

       if(mp[sum] == 2){
            ans++;
            sum = 0;
            mp.clear();
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