// In The Name of Almighty Allah

#include <bits/stdc++.h>
#include <cstddef>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 
    

void solve(){
    ll n; cin >> n;
    ll i = 1;
    ll dot = 0;
    while(abs(dot) <= n){
        if(i&1){
            dot-=((2*i)-1);
        }
        else{
            dot+=((2*i)-1);
        }
        i++;
    }
    cout << (--i&1 ? "Sakurako":"Kosuke") << '\n';
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