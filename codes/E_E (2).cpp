// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 
    

void solve(){
    ll y; cin >> y;
    if(y%4 > 0) cout << 365 << '\n';
    else if(y%4 == 0 and y%100 > 0) cout << 366 << '\n';
    else if(y%100 == 0 and y%400 > 0) cout << 365 << '\n';
    else if(y%400 == 0) cout << 366 << '\n';
}

signed main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}