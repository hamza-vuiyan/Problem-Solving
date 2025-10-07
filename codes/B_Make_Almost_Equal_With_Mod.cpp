// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define star    			cerr << "*\n"; 
#define cerrV(x)            for(auto it: x) cerr << it << ' '; cerr << '\n'; 
#define cerr(i, x)          cerr << 'i' << " = " << x << '\n';
#define all(x)              x.begin(), x.end()
#define rall(x)             x.rbegin(), x.rend()
#define cerrPair(x)         for(auto it: x) cerr << it.first << ' ' << it.second << '\n';
#define cerrn		        cerr << '\n';

void solve(){
    ll n; cin >> n;
    vector<ll> v(n);
    for(auto &i: v){
        cin >> i;
    }

    set<ll> st;
    ll i = 1;

    while(true){
        st.clear();
        ll ans = 1LL<<i;
        i++;

        for(auto it: v){
            st.insert(it%ans);
        }

        if(st.size() == 2){
            cout << ans << '\n';
            return;
        }
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