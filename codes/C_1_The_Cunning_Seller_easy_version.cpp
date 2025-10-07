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
    
    ll bag = 0;
    ll k = 18;

    ll coins = 0;
    while(n > 0 and k >= 0){
        ll res = pow(3, k);
        n-=res;
        if(n < 0){n+=res; k--; continue;}
        coins+=(pow(3, k+1)+k*pow(3, k-1));
    }
    cout << coins << '\n';
}

signed main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    signed t; cin >> t;
    while(t--)  solve();
}