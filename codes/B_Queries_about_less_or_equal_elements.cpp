// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 

void solve(){
    ll n, q; cin >> n >> q;
    vector<ll> v(n);
    for(auto &i: v) cin >> i;
    sort(v.begin(), v.end());
    vector<ll> ans;
    ll x;
    while(q--){
        cin >> x;
        auto it = upper_bound(v.begin(), v.end(), x);
        int index = (it - v.begin());
        ans.push_back(index);
    }
    for(auto it: ans) cout << it << ' ';
    cout << '\n';
}

signed main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}