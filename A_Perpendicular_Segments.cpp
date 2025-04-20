// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 
    

void solve(){
    ll x, y, k; cin >> x >> y >> k;
    ll mn = min(x, y);
    cout << 0 << ' ' << mn << ' ' << mn << ' ' << 0 << '\n';
    cout << 0 << ' ' << 0 << ' ' << mn << ' ' << mn << '\n'; 
    
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