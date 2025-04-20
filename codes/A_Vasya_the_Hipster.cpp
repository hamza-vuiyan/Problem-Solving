// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 
    

void solve(){
    int a, b; cin >> a >> b;
    cout << min(a, b) << ' ' << (max(a,b) - min(a, b))/2 << '\n';
}

signed main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}