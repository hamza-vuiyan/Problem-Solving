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
    ll a, b, x, y; cin >> a >> b >> x >> y;
    ll cost = 0;
    if(x <= y and a <= b){
        cout << (b-a)*x << '\n';
    }
    else if(x > y and a <= b){
        while(a < b){
            if(a&1) cost+=x;
            else cost+=y;
            a++;
        }

        cout << cost << '\n';
    }
    else if(b == a-1 and a&1){
        cout << y << '\n';
    }
    else{
        cout << -1 << '\n';
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