// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      	    long long
#define star    	    cerr << "*\n"; 
#define cerrV(x)            for(auto it: x) cerr << it << ' '; cerr << '\n'; 
#define cerr(i, x)          cerr << 'i' << " = " << x << '\n';
#define all(x)              x.begin(), x.end()
#define rall(x)             x.rbegin(), x.rend()
#define cerrPair(x)         for(auto it: x) cerr << it.first << ' ' << it.second << '\n';
#define cerrn		    cerr << '\n';
#define ceil(x, y)          (x/y) + (x%y != 0)

void solve(){
    ll n; cin >> n;
    vector<ll> ans;

    for(int i = 1; i <= 18; i++){
        ll res = 1 + (ll)pow(10, i);
        if(n%res == 0){
            ans.push_back(n/res);
        }
    }

    sort(all(ans));
    if(ans.size() == 0){
        cout << 0 << '\n';
        return;
    }

    cout << ans.size() << '\n';
    for(auto it: ans) cout << it << ' ';
    cout << '\n';
    
}

signed main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    signed t; cin >> t;
    while(t--)  solve();
}