// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 
    

void solve(){
    ll n; cin >> n;
    ll temp  =  n*2;
    ll ones = 0, zeros = 0;
    ll x;
    for(ll i = 0;  i < temp; i++){
        cin >> x;
        if(x&1) ++ones;
        else ++zeros;
    }

    ll mn = (zeros/2) + (ones/2);
    ll mans = max((ll)0, (n-mn));
    ll mxans = min(ones, zeros);
    cout << mans << ' ' << mxans << '\n';
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