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
    int n; cin >> n;
    vector<int> v(n);
    for(auto &i: v) cin >> i;

    for(int i = 0; i  < n-1; i++){
        if(abs(v[i]-v[i+1]) <=1){
            cout << 0 << '\n';
            return;
        }
    }
    for(int i = 0; i < n-2; i++){
        if(v[i] >= min(v[i+1], v[i+2]) and v[i] <= max(v[i+1], v[i+2])){
            cout << 1 << '\n';
            return;
        }
    }

    reverse(all(v));

    for(int i = 0; i < n-2; i++){
        if(v[i] >= min(v[i+1], v[i+2]) and v[i] <= max(v[i+1], v[i+2])){
            cout << 1 << '\n';
            return;
        }
    }

    cout << -1 << '\n';
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