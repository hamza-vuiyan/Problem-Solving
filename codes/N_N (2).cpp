// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 
    

void solve(){
    int x, y; cin >> x >> y;
    int num = (6 - max(x,y))+1;
    if(num == 1) cout << 1 << '/' << 6 << '\n';
    else if(num == 2) cout << 1 << '/' << 3 << '\n';
    else if(num == 3) cout << 1 << '/' << 2 << '\n';
    else if(num == 4) cout << 2 << '/' << 3 << '\n';
    else if(num == 5) cout << 5 << '/' << 6 << '\n';
    else if(num == 6) cout << 1 << '/' << 1 << '\n';
}

signed main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}