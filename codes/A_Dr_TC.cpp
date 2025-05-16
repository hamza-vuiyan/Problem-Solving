// In The Name of Almighty Allah

#include <bits/stdc++.h>
#include <cstddef>
using namespace std;

#define ll      			long long
#define star    			cerr << "*\n"; 
#define cerrV(x)            for(auto it: x) cerr << it << ' '; cerr << '\n'; 
#define cerr(i, x)          cerr << 'i' << " = " << x << '\n';
#define sort(x)             sort(x.begin(), x.end())
 

void solve(){
    ll n; cin >> n;
    string str; cin >> str;

    ll ones = 0;
    for(ll i = 0; i < n; i++){
        if(str[i] == '1'){
            ++ones;
        }
    }
    ll ans = 0;
    for(ll i = 0; i < n; i++){
        if(str[i] == '0'){
            ans+=(ones+1);
        }
        else{
            ans+=(ones-1);
        }
    }
    cout << ans << '\n';
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--){
        solve();
    }
}