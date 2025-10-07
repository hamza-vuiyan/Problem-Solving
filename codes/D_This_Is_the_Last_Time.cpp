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
    int n, k; cin >> n >> k;
    multimap<pair<int,int>, int> mp;
    int l, r, real;
    int o = n;
    while(o--){
        cin >> l >> r >> real;
        pair it = make_pair(l, r);
        mp.insert({it, real});
    }

    for(auto it: mp){
        int l = it.first.first;
        int r = it.first.second;
        if(it.second > k){
            if(k >= l and k <=r){
                k = it.second;
            }
        }
    }

    cout << k << '\n';
    
}

signed main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    signed t; cin >> t;
    while(t--)  solve();
}