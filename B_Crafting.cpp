// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 
    

void solve(){
    ll n; cin >> n;
    vector<ll> v(n);
    vector<ll> need(n);
    ll sum = 0;

    for(auto &i: v) {cin >> i; sum += i;}

    for(auto &i: need) cin >> i;
    vector<pair<ll, ll>> vp;
    for(int i = 0; i < n; i++){
        vp.push_back({v[i], need[i]});
    }
    sort(vp.begin(), vp.end());
    
    for(int i = 0; i < n; i++){
        ll temp = sum - vp[i].first;
        ll needd = vp[i].second - vp[i].first;
        
        ll avg = temp/(n);
        if(needd > avg){
            cerr << vp[i].second << '\n';
            cout << "NO\n";
            return;
        }

    }
    cout << "YES\n";
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