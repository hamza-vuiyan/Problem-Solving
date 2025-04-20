// In The Name of Almighty Allah

#include <bits/stdc++.h>
#include <cstddef>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 
    

void solve(){
    ll  n; cin >> n;
    vector<pair<ll, ll>> vp;
    ll x, y;
    for(ll i = 0; i < n; i++){
        cin >> x >> y;
        vp.push_back(make_pair(x, y));
    }
    sort(vp.begin(), vp.end());
    reverse(vp.begin(), vp.end());

    ll ans = vp[0].first + (vp[0].second * 2);
    if(n == 1){
        ans+=(vp[0].first);
        cout << ans << '\n'; return;
    }
    ll upper = vp[0].first;
    ll first = vp[0].first;
    ll second = vp[0].second;

    for(ll i = 1;  i < n; i++){
        if(i == (n-1)){
            if(vp[i].second > second){
                ans+=((first - vp[i].first) + ((vp[i].second-second)*2));
                upper = vp[i].first;
            }
            ans+=upper;
        }
        else{
            if(vp[i].second > second){
                ans+=((first - vp[i].first) + ((vp[i].second-second)*2));
                upper = vp[i].first;
                first = vp[i].first;
                second = vp[i].second;
            }
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