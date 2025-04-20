
// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 
    

void solve(){
    ll n; cin >> n;
    vector<pair<ll,ll>> vp;
    ll x, y;
    
    for(ll i = 0; i < n; i++){
        cin >> x >> y;
        vp.push_back(make_pair(x, y));
    }

    sort(vp.begin(), vp.end(), [](const pair<ll, ll>& a, const pair<ll, ll>& b) {
        if (a.first != b.first)
            return a.first < b.first;     
        return a.second > b.second; 
    });

    ll sum = 0;
    ll temp;

    for(ll i = 0; i < n; ){
        ll loop = vp[i].first;
        while(loop-- and i < n){
            sum+=vp[i].second;
            i++;
            if(vp[i].first != vp[i-1].first) break;
        }
        while(vp[i].first == vp[i-1].first and i < n){
            i++;
        }
    }
    cout << sum << '\n';
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





