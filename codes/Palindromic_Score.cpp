// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 
    

void solve(){
    ll a, b, c; cin >> a >> b >> c;

    ll ans = LONG_LONG_MAX;
    ans = min(ans, a+b - ((a&1)&&(b&1)));
    ans = min(ans, b+c - ((b&1)&&(c&1)));
    ans = min(ans, a+c - ((a&1)&&(c&1)));

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
