// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 
    
ll check(ll mid, ll k, ll m, ll n){

    ll factor = mid+1;
    ll div = m/factor;
    ll sum = div*mid*n;
    ll extra = m- (factor*div);
     sum+=(extra*n);
    return sum;
}
void solve(){
    ll n, m , k; cin >> n >> m >> k;
    ll ans = LONG_LONG_MAX;

    if(k <= n) cout << 1 << '\n';
    else if(k*2 <= m) cout << 1 << '\n';
    else{
        ll l = 1, r = m;
        while(l <= r){
            ll mid = l+((r-l)/2);
            if(check(mid, k, m, n) >= k){
                ans = min(ans, mid);
                r = mid-1;
            }
            else l = mid+1;
        }
        cout << ans << '\n';
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