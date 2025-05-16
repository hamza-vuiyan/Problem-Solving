// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 
    

void solve(){
    ll n, t; cin >> n >> t;
    vector<ll> v(n);
    for(auto &i: v) cin >> i;

    ll candy = 1;
    ll time = v[0] + t;
    for(int i = 1; i < n; i++){
        if(v[i] >= time){
            candy++;
            time = v[i]+t;
        }
    }
    cout << candy << '\n';
}

signed main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}