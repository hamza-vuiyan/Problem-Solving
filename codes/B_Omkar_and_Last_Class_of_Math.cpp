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
    
    if(n&1){
        set<int> divs;
        for(int i = 1; i*i <= n; i++){
            if(n%i==0){
                divs.insert(n/i);
                divs.insert(i);
            }
        }

        vector<int> d(all(divs));
        int m = d.size();
        
        cout << d[m-2] << ' ' << n - d[m-2] << '\n';
    }
    else{
        cout << n/2 << ' ' << n/2 << '\n';
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