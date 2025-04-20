// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 
    

void solve(){
    ll n, k; cin >> n >> k;
    vector<ll> v(n);
    for(auto &i: v) cin >> i;
    if(n >= k){
        cout << k << '\n';
        return;
    }

    sort(v.begin(), v.end());
    
    ll button = 0;
    ll sum = 0;
    ll pmin = 0;
    for(ll i = 0; i < n;){
        v[i]-=pmin;
        sum+=((n-i)*v[i]);
        button+=((n-i)*v[i]);;

        if(sum >= k){
            if(sum > k){
                button-=(sum-k);
            }
            cout << button << '\n';
            return;
        }
        button++;
        pmin+=(v[i]);
        i++;  
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