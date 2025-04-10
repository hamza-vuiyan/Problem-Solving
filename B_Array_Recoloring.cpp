// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 
    

void solve(){
    ll n, k; cin >> n >> k;
    vector<ll> v(n);
    ll sum = 0;
    for(auto &i: v) cin >> i;
    if(n == 2) cout << v[0]+v[1] << '\n';
    else if(k == 1){
        ll mx = 0;
        for(int i = 1; i < n-1; i++){
            mx = max(mx, v[i]);
        }
        cout << max((v[0]+v[n-1]), mx+max(v[0], v[n-1])) << '\n';
        return;
    }
    
    else{
        sort(v.begin(), v.end(), greater<int>());

        for(int i = 0; i <= k; i++) sum+=v[i];
        cout << sum << '\n';    
    }
    
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