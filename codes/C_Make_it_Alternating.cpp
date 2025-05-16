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
#define MOD                 998244353

void solve(vector<ll>& factor){
    string str; cin >> str;

    ll operations = 0;
    ll n = str.size();
    vector<ll> blocks;
    for(ll i = 0; i < n; ++i){
        ll count = 1;
        if(str[i] == '0'){
            ++i;
            while(i < n and str[i] == '0'){ ++operations; ++i; ++count;}
            blocks.push_back(count);
            --i;
        }
        else{
            ++i;
            while(i < n and str[i] == '1'){ ++operations; ++i; ++count;}
            blocks.push_back(count);
            --i;
        }
    }

    ll ans = 1;
    ll total_ways = 1;

    for(ll i = 0; i < blocks.size(); i++){
        total_ways = (total_ways%MOD * blocks[i]%MOD)%MOD;
    }

    ll combinations = factor[operations];

     cout << operations << ' ' << (total_ways%MOD*combinations%MOD)%MOD << '\n';
}

signed main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    ll t;
    cin >> t;
    vector<ll> factorials((ll)2e5+1);
    ll ans = 1;
    factorials[0] = 1;
    for(ll i = 1; i <= (ll)2e5; i++){
        ans = (ans%MOD * i%MOD)%MOD;
        factorials[i] = ans;
    }

    while (t--){
        solve(factorials);
    }
}