// In The Name of Almighty Allah

#include <bits/stdc++.h>
#include <cstddef>
using namespace std;

#define ll      			long long
#define star    			cerr << "*\n"; 
#define cerrV(x)            for(auto it: x) cerr << it << ' '; cerr << '\n'; 
#define cerr(i, x)          cerr << 'i' << " = " << x << '\n';
#define all(x)              x.begin(), x.end()
#define rall(x)             x.rbegin(), x.rend()
#define cerrPair(x)         for(auto it: x) cerr << it.first << ' ' << it.second << '\n';

void solve(){
    int n; cin >> n;
    vector<int> v(n);
    int one = 0;
    for(auto &i: v){
        cin >> i;
        if(i == 1) one++;
    } 
    if(one == n){
        cout << "YES\n";
        return;
    }
    
    for(int i = 0; i < n-1; i++){
        if(v[i] == 0 and v[i] == v[i+1]){
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
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