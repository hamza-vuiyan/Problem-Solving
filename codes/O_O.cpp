// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 
    

void solve(){
    ll n, mx, k; cin >> n >> mx >> k;
    ll total = 0;
    ll x, q;

    while(n--){
        cin >> x >> q;
        total+= (x*q);
    }
    if(total < mx) total+=k;
    cout << total << '\n'; 
}

signed main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}