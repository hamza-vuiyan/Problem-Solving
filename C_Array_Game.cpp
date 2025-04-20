// In The Name of Almighty Allah

#include <bits/stdc++.h> //TLE
#include <cstddef>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';} cerr << '\n';
#define star    			cerr << "*\n"; 
#define errmp               for(auto it: mp) cerr << it.first << ' ' << it.second << '\n';             
    

void solve(){
    ll n, k; cin >> n >> k;
    vector<ll> v;
    for(int i = 0; i < n; i++){
        ll x; cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());

    ll diff, mn = LONG_LONG_MAX;
    if(k > 2){
        cout << 0 << '\n';
        return;
    }
    else{
        if(k == 1){
            mn = v[0];
            for(int i = 0; i < n-1; i++){
                diff = abs(v[i+1]-v[i]);
                mn = min(mn, diff);
            }
            cout << mn << '\n'; return;
        }


        else{
            for (int i = 0; i < n - 1; i++) {
                if (v[i] == v[i + 1]) {
                    cout << 0 << '\n';
                    return;
                }
            }
            map<ll, ll> mp;
            for(auto it: v) mp[it]++;

            for(int i = 0; i < n-1; i++){
                for(int j = i+1; j < n; j++){
                    diff = abs(v[i]-v[j]);
                    mn = min(mn, diff);
                    if(mp[diff] == 0) continue;
                    else if(mp[diff] == 1){
                        cout << 0 << '\n';
                        return;
                    }
                }
            }

            diff = mn;
            ll pndf = LONG_LONG_MAX;
            ll ndf = LONG_LONG_MAX;
            ll ans = diff;
            for(int i = 0; i < n-1; i++){
                for(int j = i+1; j < n; j++){
                    diff =  abs(v[j]-v[i]);

                    for(int k = 0; k < n; k++){
                        ndf = abs(v[k] - diff);
                        if(ndf < pndf){
                            ans =  ndf;
                            pndf = ndf;

                        }
                    }                  
                }
            } 
            cout <<    min(mn, ans)   << '\n';
        }
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