// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 
    

void solve(){
    ll n; cin >> n;
    vector<ll> v(n);
    for(auto &i: v) cin >> i;

    for(int i = 0; i < n-1; i++){
        ll res = abs(v[i] - v[i+1]);
        if(res == 5 or res == 7){
            continue;
        }
        else {
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