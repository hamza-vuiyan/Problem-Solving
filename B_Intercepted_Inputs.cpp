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
    sort(v.begin(), v.end());
    ll rem = n-2;
    ll h, m;
    ll l = 0, r = n-1;

    while(l < r){
        ll res = v[l]*v[r];
        if( res == rem){
            h = v[l];
            m = v[r];
            break;
        }
        if(res > rem)   r--;

        else l++;
    }
    cout << h << ' '  << m << '\n';
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