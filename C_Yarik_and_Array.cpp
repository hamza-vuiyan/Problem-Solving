// In The Name of Almighty Allah

#include <bits/stdc++.h>
#include <cstddef>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 
    

void solve(){
    int n; cin >> n;
    vector<ll> v(n);
    for(auto &i: v) cin >> i;

    ll ans = -1, subsum = 0;
    for(int i = 0; i < n-1; i++){
        
    }
    //cerr << subsum << '\n';
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