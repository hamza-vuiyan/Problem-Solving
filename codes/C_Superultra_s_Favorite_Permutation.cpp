// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 
    

void solve(){
    ll n; cin >> n;
    deque<ll> dq;
    if(n < 5) {cout << -1 << '\n';return;}
    dq.push_front(4);
    dq.push_back(5);
    for(ll i = 1; i <= n; i++){
        if(i == 4 or i ==5) continue;
        if(i&1) dq.push_back(i);
        else dq.push_front(i);
    }
    for(auto it: dq)  cout << it << ' ';
    cout << '\n';
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