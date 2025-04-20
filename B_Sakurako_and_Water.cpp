// In The Name of Almighty Allah

#include <bits/stdc++.h>
#include <cstddef>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 
    

void solve(){
    ll n; cin >> n;
    long long  arr[n][n];
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    ll ans = 0;
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < n; j++){
            if(arr[i][j] < 0){
                ll mn = LONG_LONG_MAX;
                ll k = i, m = j;
                while(k < n && m < n){
                    mn = min(mn, arr[k][m]);
                    arr[k][m] = 0;
                    k++, m++;
                }
                ans+=(abs(mn));
            } 
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