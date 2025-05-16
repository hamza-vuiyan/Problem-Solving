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

void solve(){
    ll n; cin >> n;
    vector<ll> v(n);

    for(auto &i: v) cin >> i;

    vector<ll> ans;
    ans.push_back(v[0]);

    for(ll i = 1; i < n; i++){
        if(v[i] >= v[i-1]){
            while(i < n and v[i] >= v[i-1]){
                i++;
            }
            ans.push_back(v[--i]);
        }
        else{
            while(i < n and v[i] <= v[i-1]){
                i++;
            }
            ans.push_back(v[--i]);
        }
    }
    
    cout << ans.size() << '\n';
    for(auto it: ans) cout << it << ' ';
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