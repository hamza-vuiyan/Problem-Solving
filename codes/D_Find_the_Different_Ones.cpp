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
    for(auto &i: v) cin >> i;

    map<int, int> mp;
    int i = 0, j = 0;
    while(1){
        while(i < n-1 and v[i] == v[i+1]){
            i++;
        }
        i++;

        while(j < i){
            mp[j+1] = i+1;
            j++;
        }

        if(i >= n-1) break;
    }
    
    int q; cin >> q;
    while(q--){
        int l, r; cin >> l >> r;
        if(mp[l] == n+1 or mp[l] > r){
            cout << -1 << ' ' << -1 << '\n';
        }
        else cout << l << ' ' << mp[l] << '\n';
    }
    cout << '\n';

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