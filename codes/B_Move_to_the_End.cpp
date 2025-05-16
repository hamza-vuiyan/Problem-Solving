// In The Name of Almighty Allah

#include <bits/stdc++.h>
#include <cstddef>
using namespace std;

#define ll      			long long
#define star    			cerr << "*\n"; 
#define cerrV(x)            for(auto it: x) cerr << it << ' '; cerr << '\n'; 
#define cerr(i, x)          cerr << 'i' << " = " << x << '\n';
#define sort(x)             sort(x.begin(), x.end())
 

void solve(){
    ll n; cin >> n;
    vector<ll> v(n);

    ll mx = -1;
    for(auto &i: v){
        cin >> i;
        mx = max(mx, i);
    } 

    vector<ll> prefixSum(n);
    vector<ll> big(n);

    prefixSum[0] = v[0];
    big[0] = (v[0]);
    for(ll i = 1; i < n; i++){
        prefixSum[i] = v[i] + prefixSum[i-1];
        big[i] = max(big[i-1], v[i-1]);
    }
    vector<ll> ans;
    ans.push_back(mx);

    ll r = n-1;
    ll l;
    for(ll i = 2; i <=n; i++){
        l = (n-i+2);
        l--;
        ll fixedSum = prefixSum[r] - prefixSum[l-1];
        ll mx = big[l];
        ans.push_back(fixedSum+mx);
    }

    for(auto it: ans) cout << it << ' ';
    cout << '\n';
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--){
        solve();
    }
}