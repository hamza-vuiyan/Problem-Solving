// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 
#define cerrV(x)            for(auto it: x) cerr << it << ' '; cerr << '\n'; 
#define cerr(i, x)          cerr << 'i' << " = " << x << '\n';
#define sort(x)             sort(x.begin(), x.end())
 
void solve(){
    double n, m, a, b; cin >> n >> m >> a >> b;

    double special = b/m;
    ll ans = 0;
    if(special < a){
        ll div = (ll) n/ (ll) m;
        ans+=(div*(ll)b);
        if((ll)n%(ll)m){
            ll dd = ((ll)n%(ll)m) * a;
            if(dd > b) ans+=b;
            else ans+=dd;
        }
        cout << (ll)ans << '\n';
    }
    else{
        cout << (ll)(a*n) << '\n';
    }
}

signed main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    // ll t;
    // cin >> t;
    // while (t--){
        solve();
    // }
}