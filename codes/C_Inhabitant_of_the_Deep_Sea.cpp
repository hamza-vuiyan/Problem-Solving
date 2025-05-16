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
    ll n, k; cin >> n >> k;
    vector<ll> v(n);

    for(auto &i: v) cin >> i;

    ll l = 0, r = n-1;

    while(l <=r ){
        if(k < 1) break;

        ll lefty = v[l];
        ll righty = v[r];

        if(l == r){
            v[l]-=k;
            break;
        }

        if(lefty <= righty){
            if(k < (2*lefty-1)) break;
            v[l] = 0;
            k-=lefty;
            if(k < 1) break;

            v[r]-=min(k, lefty);
            k-=min(k, lefty);
           
            l++;
        }
        else{
            if(k < (2*righty)) break;
            v[r] = 0;
            k-=righty;

            if(k < 1) break;

            v[l]-=min(k, righty);

            k-=min(k, righty);
            r--;
        }

    }
    ll count = 0;

    for(auto it: v){
        if(it <= 0) ++count;
    }
    cout << count << '\n';
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