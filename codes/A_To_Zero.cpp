// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 
    

void solve(){
    ll n, k; cin >> n >> k;
    if(n&1){
        n-=k;   k--;
        if(n%k == 0) cout << n/k + 1 << '\n';
        else cout << n/k + 2 << '\n';
    }
    else{
        if(k&1) k--;
        if(n%k == 0) cout << n/k << '\n';
        else cout << n/k + 1 << '\n';
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