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
#define cerrn		        cerr << '\n';

void solve(){
    ll n, m; cin >> n >> m;
    ll arr[n][m];
    for(ll i = 0; i < n; i++){  
        for(ll j= 0; j < m; j++){
            cin >> arr[i][j];
        }
    }

    ll ans = 0;

    for(ll i = 0; i < m; i++){
        vector<ll> tem;
        for(ll j = 0; j < n; j++){
            tem.push_back(arr[j][i]);
        }
        sort(all(tem));
            
        for(ll k = 0; k < n; k++){
            ll mn = n - k - 1;
            ll plus = k;
            ans-=(mn*tem[k]);
            ans+=(plus*tem[k]);
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