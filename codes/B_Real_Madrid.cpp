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
    ll k, small, big; cin >> k >> small >> big;

    ll bgp = big*2;
    ll ans = 0;
    if(k == 1){
        cout << (small+big) << '\n';
        return;
    }
    if(k&1){
       ll div = bgp/(k-1);
       if(small >= div){
        ans+=div;
        small-=div;
        bgp-=(div*(k-1));
       }
       else{
            ans+=small;
            bgp-=(small*(k-1));
            small = 0;
            ans+=((bgp+small)/(k+1));
            cout << ans << '\n';
            return;
       }

       ans+=((bgp+small)/k);
       cout << ans << '\n';
    }
    else{
        cout << (small+(big*2))/k << '\n';
    }
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
