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

ll search(vector<ll>& v, ll key){
    ll l = 0, r = v.size()-1;

    ll ans = -1;
    while(l <= r){
        ll mid = (l+r)/2;

        if(v[mid] <= key){
            ans = mid;
            l = mid+1;
        }
        else{
            r = mid-1;
        }
    }
    if(ans == -1) return -1;
    return ans+1;
}

void solve(){
    ll n; cin >> n;
    vector<pair<ll,ll>> vp;

    for(ll i = 0; i < n; i++){
        ll x; cin >> x;
        if(x >= (i+1)) continue;
        vp.push_back({x, i+1});
    }


    ll ans = 0;
    vector<ll> temp;
    for(auto it: vp){
        temp.push_back(it.second);
    }

    for(ll i = vp.size() - 1; i > 0; i--){
        ll key = vp[i].first;
        ll pos = search(temp, key-1);
        if(pos > 0) ans+=pos;

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