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
    int n;  cin >> n;
    vector<int> v(n);
    for(auto  &i: v) cin >> i;

    int c = 0;
    for(int i = 0; i < n; i++){
        bool f = true;
        while(v[i] > 0 and i < n){
            f = false;
            i++;
        }
        if(!f)c++;
    }
    if(c > 1) cout << 2 << '\n';
    else if( c == 1) cout << 1 << '\n';
    else cout << 0 << '\n';
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