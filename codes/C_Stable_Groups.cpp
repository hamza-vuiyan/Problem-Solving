// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define star    			cerr << "*\n"; 
#define cerrV(x)            for(auto it: x) cerr << it << ' '; cerr << '\n'; 
#define cerr(i, x)          cerr << 'i' << " = " << x << '\n';
#define all(x)              x.begin(), x.end()
#define rall(x)             x.rbegin(), x.rend()
#define cerrPair(x)         for(auto it: x) cerr << it.first << ' ' << it.second << '\n';
#define cerrn		        cerr << '\n';
#define ceil(x, y)          (x/y) + (x%y != 0)

void solve(){
    ll n, x, k; cin >> n >> k >> x;
    vector<ll> v(n);
    for(auto &i: v) cin >> i;

    sort(all(v));
    ll ans = 0;

    vector<ll> needs;

    for(ll i = 0; i < n-1; i++){
        ll diff = v[i+1]-v[i];
        if(diff <= x) continue;
        else{
            needs.push_back(ceil(diff, x) - 1 );
        }
    }

    sort(all(needs));
    
    ll count = 1;

    for(auto it: needs){
        k-=it;
        if(k < 0) count++;
    }

    cout << count << '\n';
}

signed main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}