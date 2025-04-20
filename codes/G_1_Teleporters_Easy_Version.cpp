// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 
    

void solve(){
    ll n, c; cin >> n >> c;
    vector<ll> v(n);
    for(auto &i: v) cin >> i;
    for(int i = 0; i < n; i++){
        v[i]+=(i+1);
    }
    sort(v.begin(), v.end());
    ll sum = 0, count = 0;
    for(int i = 0; i < n; i++){
        sum+=v[i];
        if(sum <= c) count++;
        else break;

    }
    cout << count << '\n';
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