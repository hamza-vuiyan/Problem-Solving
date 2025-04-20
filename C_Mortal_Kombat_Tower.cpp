// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 
    

void solve(){
    ll n; cin >> n;
    vector<ll> v(n);
    for(auto &i: v) cin >> i;
    int ans = 0;
    if(v[0] == 1) ans++;

    int count = 1;
    for(int i = 1; i < n-1; i++){
        if(v[i] == v[i+1] && v[i] == 1){
            count++;
        }
        else{
            ans+=(count/3.00);
            count = 1;
        }
    }
    ans+=(count/3.00);

    cout << ans << '\n';

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