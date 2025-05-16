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
    ll n, k; cin >> n >> k;
    vector<ll> a(n);
    vector<ll> b(n);
    for(auto &i: a) cin >> i;
    for(auto &i: b) cin >> i;

    set<ll> st;
    ll sum = 0;
    for(ll i = 0; i < n; i++){
        if(b[i] >= 0){
            st.insert(a[i]+b[i]);
            sum = a[i]+b[i];
        } 
    }

    ll mx = -1;
    ll mn = LLONG_MAX;
    for(int i = 0; i < n; i++){
        mx = max(mx, a[i]);
        mn = min(mn, a[i]);
    }

    if(st.size() > 1){
        cout << 0 << '\n';
        return;
    }

    ll diff = mx - mn;
    
    if(mx > sum and !st.empty()){
        cout << 0 << '\n';
        return;
    }

    if((mn + k) < sum){
        cout << 0 << '\n';
        return;
    }


    if (st.empty()){
        cout << (k - diff +1) << '\n';
    }
    else cout << 1 << '\n';
}

int main(){
    std::ios::sync_with_stdio(true);
    std::cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--){
        solve();
    }
}