// In The Name of Almighty Allah

#include <bits/stdc++.h>
#include <cstddef>
using namespace std;

#define ll      			long long
#define star    			cerr << "*\n"; 
#define cerrV(x)            for(auto it: x) cerr << it << ' '; cerr << '\n'; 
#define cerr(i, x)          cerr << 'i' << " = " << x << '\n';
#define sort(x)             sort(x.begin(), x.end())
#define cerrPair(x)         for(auto it: x) cerr << it.first << ' ' << it.second << '\n';

void solve(){
    ll a, b; cin >> a >> b;

    ll xorRes = 0;
    ll rem = (a-1)%4;

    if(rem == 0)    xorRes = a-1;
    else if(rem == 1) xorRes = 1;
    else if(rem == 2) xorRes = a;
    else xorRes = 0;

    ll fnl = xorRes ^ b;

    if(xorRes == b) cout << a << '\n';
    else if(fnl == a) cout << a+2 << '\n';
    else cout << a+1 << '\n';

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
