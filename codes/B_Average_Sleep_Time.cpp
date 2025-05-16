// In The Name of Almighty Allah

#include <bits/stdc++.h>
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


    ll sum = 0;
    ll j = 0;
    while(j < k){
        sum+=v[j];
        j++;
    }

    ll ans = sum;

    for(int i = k; i < n; i++){
        ll newS = sum-(v[i-k])+v[i];
        ans+=(newS);
        sum = newS;

    }

    cout << fixed << setprecision(10) << ((double)ans/(n-k+1)) << '\n';
}

signed main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}