// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 
    

void solve(){
    int x , y; cin >> x >> y;
    int diff = abs(x - y);

    if(diff == 0) cout << 1 << '\n';
    else if(diff%2 == 0) cout << 3 << '\n';
    else cout << 2 << '\n';
}

signed main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}