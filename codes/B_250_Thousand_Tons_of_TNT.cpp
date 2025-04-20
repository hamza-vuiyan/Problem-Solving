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
    vector<ll> prefixsum(n);
    prefixsum[0] = v[0];
    for(int i = 1; i < n; i++){
        prefixsum[i] = prefixsum[i-1]+v[i];
    }
    vector<ll> divisors;
    for(int i = 1; i <=sqrt(n); i++){
        if(n%i == 0){
            divisors.push_back(i);
            divisors.push_back(n/i);
        }
    }
    sort(divisors.begin(), divisors.end());
    ll q = divisors.size();

    ll ans = 0;
    ll k = 0;
    ll sum;
    --q;
    while(q--){
        ll l = 0;
        ll r = divisors[k]-1;
        ll mx = -1, mn = LONG_LONG_MAX;
        while(r < n){
            if(l == 0)
                sum = prefixsum[r];
            else   
                sum = prefixsum[r] - prefixsum[l-1];

            mx = max(mx, sum);
            mn = min(mn, sum);
            l += divisors[k];
            r += divisors[k];
        }
        ans = max(ans, (mx-mn));
        k++;
    }
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