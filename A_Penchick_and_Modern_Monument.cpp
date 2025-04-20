// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 
    

void solve(){
    ll n; cin >> n;
    vector<ll> v(n);
    for(auto &i: v) cin >> i;
    int mx = 1;
    int cnt = 1;
    for(int i = 0;  i < n-1; i++){
        if(v[i] == v[i+1]) cnt++;
        else{ mx = max(mx, cnt); cnt = 1;}
    }
    mx = max(mx, cnt);
    cout << n - mx << '\n';
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