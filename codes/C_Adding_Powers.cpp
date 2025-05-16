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
    ll n, k; cin >> n >> k;
    vector<ll> v(n);
    for(auto &i: v){
        cin >> i;
    }

    vector<ll> powers;
    powers.push_back(1);
    ll sum = 1;
    for(ll i = 1; i <= 60; i++){
        sum*=k;
        // cerr << sum << '\n';

        if(sum <= 10e16)
            powers.push_back(sum);
        else break;
    }

    // cerrV(powers);


    for(ll i = powers.size()-1; i >=0; i--){
        ll val = powers[i];
        ll count = 0;

        for(ll j = 0; j < n; j++){
            if(v[j] > 0 and v[j] >= val){
                v[j]-=val;
                ++count;
            }
        }
        if(count > 1){
            cout << "NO\n";
            return;
        }

    }

    for(ll i = 0; i < n; i++){
        if(v[i] == 0) continue;
        else{
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";

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