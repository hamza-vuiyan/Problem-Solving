// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 
    

void solve(){
    ll n; cin >> n;
    string str; cin >> str;
    ll bc = 0, gc = 0;
    bool f = false;
    for(auto it: str){
        if(it == 'B'){
            bc++;
        }
        else gc++;
        if(bc > (gc*2)){ cout << (bc+gc) << '\n'; f = true; break;}
    }
    if(!f) cout << n << '\n';
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