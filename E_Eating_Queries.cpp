// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 
    


int  binarySearch(vector<ll>& prefixSum, ll x){
    ll l = 0, r = prefixSum.size()-1;
    ll res = prefixSum.size()-1;
    while(l <= r){
        ll mid = (l+r)/2;
        if(prefixSum[mid] == x){
            return mid+1;
        }
        else if(prefixSum[mid] > x){
            res = mid;
            r = mid -1;
        }
        else l = mid + 1;
    }
    return res+1;
}
void solve(){
    ll n, q; cin >> n >> q;
    vector<ll> v(n);
    for(auto &i: v) cin >> i;
    sort(v.rbegin(), v.rend());

    vector<ll> prefixSum(n);
    prefixSum[0] = v[0];
    for(ll i = 1; i < n; i++)  prefixSum[i] = prefixSum[i-1]+v[i];
    ll x;
    while(q--){
        cin >> x;
        if(x > prefixSum[n-1]){
            cout << -1 << '\n';
            continue;
        }
        ll res = binarySearch(prefixSum, x);
        cout << res << '\n';
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