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

int ans(int n){
    int count = 0;
    while(n > 1){
        n = n+1;
        n = n/2;
        count++;
    }
    return count;
}

void solve(){
    int n, m, x, y; cin >> n >> m >> x >> y;

    if(y > (m/2)) y = (m-y+1);
    if(x > (n/2)) x = (n-x+1);

    int vertical = 1 + ans(n) + ans(y);
    int horizontal = 1 + ans(m) + ans(x);

    cout << min(vertical, horizontal) << '\n';
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