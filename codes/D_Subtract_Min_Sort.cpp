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
        int mn = min(v[i], v[i+1]);
        v[i]-=mn;
        v[i+1]-=mn;
    }
    for(int i = 0; i < n-1; i++){
        if(v[i] > 0){
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