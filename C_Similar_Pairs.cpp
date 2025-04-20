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
    sort(v.begin(), v.end());
  
    int odd = 0, even = 0, similar = 0;
    for(int i = 0; i < n-1; i++){
        if(1&v[i]) odd++;
        else even++;
        if(v[i+1]-v[i] == 1) similar++;
    }

    v[n-1]&1 ? odd++:even++;
    
    if(odd%2 == 0 and even %2 == 0){
        cout << "YES\n";
    }
    else{
        if(similar) cout << "YES\n";
        else cout << "NO\n";
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