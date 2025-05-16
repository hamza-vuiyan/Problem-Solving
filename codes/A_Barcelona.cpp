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

    vector<tuple<int, int, int>> vt;

    for(int i = 0; i < n; i++){
        int a, b, c; cin >> a >> b >> c;
        vt.push_back({c, a, b});
    }
    int x, y; cin >> x >> y;

    sort(rall(vt));


    for(int i = 0; i < n; i++){
        if(x > get<1>(vt[i]) and x <= get<2>(vt[i]) and y > get<0>(vt[i])){
            x = get<2>(vt[i]);
            y = get<0>(vt[i]);
        }
    }

    cout << x << '\n';

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