// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 
    

ll pw(ll n){
    ll sum = 1 << n;
    return sum;
}

void solve(){
    ll n, k; cin >> n >> k;
    vector<ll> v(n);
    for(auto &i: v) cin >> i;
    map<ll, ll> mp;
    ll q;
    ll mx = *max_element(v.begin(), v.end());
    for(ll i = 0; i < k; i++){
        cin >> q;
        if(mx < pw(q)) continue;
        if(mp[q] < 1){
            for(auto &it: v){
                if(it%pw(q) == 0){
                    it+=pw(q-1);
                }
            }
        }
        mp[q]++;
    }

    for(auto it: v){
        cout << it << ' ';
    }
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