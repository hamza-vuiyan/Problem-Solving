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
#define MOD                 1000000007


ll power(ll n, ll i){
    ll ans = 1;
    for(ll k = 0; k < i; k++){
        ans*=n;
        ans%=MOD;
    }
    return ans%MOD;
}

void solve(){
    ll n, k; cin >> n >> k;

    string bin = "";

    ll temp = k;

    while(k > 0){
        ll rem = k%2;
        bin+=rem+'0';
        k/=2;
    }


    ll ans = 0;

    for(ll i = 0; i < bin.size(); i++){
        if(bin[i] == '1'){
            ll res = power(n, i);
            ans =(ans+res)%MOD;
        }
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