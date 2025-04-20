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
    vector<ll> nv = v;
    sort(nv.begin(), nv.end());
    for(int i = 0; i < n-1; i++){
        if(v[i] > v[i+1] && abs(v[i] - v[i+1] == 1)){
             swap(v[i], v[i+1]);
        }
    }
    cout << (nv == v ? "YES\n":"NO\n");
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