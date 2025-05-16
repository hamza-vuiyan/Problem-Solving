// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define star    			cerr << "*\n"; 
#define cerrV(x)            for(auto it: x) cerr << it << ' '; cerr << '\n'; 
#define cerr(i, x)          cerr << 'i' << " = " << x << '\n';
#define all(x)              x.begin(), x.end()
#define rall(x)             x.rbegin(), x.rend()
#define cerrPair(x)         for(auto it: x) cerr << it.first << ' ' << it.second << '\n';

void solve(){
    ll n; cin >> n;
    vector<pair<ll,ll>> v;
    ll sum = 0;

    for(int i = 0; i < n; i++){
        int x; cin >> x;
        sum+=x;
        v.push_back({x, i+1});
    }
    sort(all(v));

    ll mx = v[n-1].first;
    ll ans = 0;
    vector<ll> index;
    for(int i = 0; i < n-1; i++){
        if(sum-(v[i].first + mx) == mx){
            ans++;
            index.push_back(v[i].second);
        }
    }

    if(sum-mx-v[n-2].first == v[n-2].first){
         ans++;
         index.push_back(v[n-1].second);
    }

    cout << ans << '\n';
    for(auto it: index) cout << it << ' ';
    cout << '\n';
}

signed main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
