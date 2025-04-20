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
    
    ll sum = 0;
    for(int i = 0; i < k; i++) sum+=v[i];
    ll ans = sum;
    int idx = 1;

    for(int i = 1; i < n-(k-1); i++){
        sum -= v[i-1];
        sum += v[i+k-1];
        if(sum < ans){
            ans = sum;
            idx = i+1;
        } 
    }
    cout << idx << '\n';
}

signed main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}