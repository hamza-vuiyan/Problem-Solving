// In The Name of Almighty Allah

#include <bits/stdc++.h>
#include <cstddef>
using namespace std;

#define ll      			long long
#define star    			cerr << "*\n"; 
#define cerrV(x)            for(auto it: x) cerr << it << ' '; cerr << '\n'; 
#define cerr(i, x)          cerr << i << " = " << x << '\n';
#define sort(x)             sort(x.begin(), x.end())
#define cerrPair(x)         for(auto it: x) cerr << it.first << ' ' << it.second << '\n';

ll getSum(ll l, ll r){
    return (l+r)*(r-l+1)/2;
}
 
void solve(){
    ll n, x, y; cin >> n >> x >> y;

    ll divX = n/x;
    ll divY = n/y;

    ll lm = lcm(x, y);
    ll common = n/lm;

    divX-=common;
    divY-=common;

    ll smSum = getSum(1, divY);
    ll bgSum = getSum((n-divX+1), n);

    cout << bgSum - smSum << '\n';
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