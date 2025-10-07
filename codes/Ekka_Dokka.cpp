
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

ll cases = 1;
void solve(){
    ll n; cin >> n;
    cout << "Case " << cases++ << ": ";
    if(1&n){
        cout << "Impossible\n";
        return;
    }

    ll k = n;
    
    if(n%2 == 0){
        n/=2;
        while(n%2 == 0){
           n/=2;
        }
    }
    
    // if(ans == -1) cout << "Impossible\n";
    cout << n << ' ' << k/n << '\n';
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