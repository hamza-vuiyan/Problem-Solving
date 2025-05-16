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
    int n, k; cin >> n >> k;

    if(k >= n){
        cout << 1 << '\n';
        return;
    }

    vector<int> divisors;

    for(int i = 1; i*i <= n; i++){
        if(n%i == 0){
            divisors.push_back(i);
            divisors.push_back(n/i);
        }
    }
    sort(rall(divisors));

    for(int i = 0; i < divisors.size(); i++){
        if(divisors[i] <= k){
            cout << n/divisors[i] << '\n';
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