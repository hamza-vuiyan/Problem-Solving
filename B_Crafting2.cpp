// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 
    

void solve(){
    ll n; cin >> n;
    vector<ll> available(n);
    vector<ll> requirment(n);
    
    for(auto &i: available) cin >> i;
    for(auto &i: requirment) cin >> i;

    ll less = 0;
    ll mnBig = LONG_LONG_MAX;
    ll need = 0;
    for(ll i = 0; i < n; i++){
        if(available[i] < requirment[i]){
            need = requirment[i]-available[i];
            less++;
        }
        else{
            ll diff = available[i]-requirment[i];
            mnBig = min(mnBig, diff);
        }
    }

    if(less > 1){
        cout << "NO\n";
        return;
    }
    cout << (need > mnBig ? "NO\n":"YES\n");
    
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