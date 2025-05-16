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
    ll n; cin >> n;
    vector<ll> v(n);

    for(auto &it: v) cin >> it;

    ll total = pow(2, n);

    for(ll i = 0; i < total; i++){
        string bin = "";
        ll k = i;

        while(k > 0){
            ll rem = k%2;
            k/=2;
            bin+=rem+'0';
        }
        while(bin.size() < n) bin+='0';


        ll sum = 0;
        for(ll i = 0; i < n; i++){
            if(bin[i] == '1') sum+=v[i];
            else sum-=v[i];
        }

        if(sum%360 == 0 or sum == 0){
            cout << "YES\n";
            return;
        }
    }

    cout << "NO\n";
}

signed main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}