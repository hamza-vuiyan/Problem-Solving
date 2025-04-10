// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 
    

void solve(){
    ll x, y, a; cin >> x >> y >> a;
    ll tot = x+y;
    ll div = a/tot;
    ll rem = (a%tot);

    tot*=div;
    if(rem){
        if(tot+x > a) cout << "NO\n";
        else cout << "YES\n";
    }
    else{
        cout << "NO\n";
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