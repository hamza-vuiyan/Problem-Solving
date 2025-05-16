// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 
    

void solve(){
    ll f, d, w; cin >> f >> d >> w;
    
    
    ll need = 0;
    for(int i =  1; i <= w; i++){
        need+=(f*i);
    }
    if(need <= d) cout << 0 << '\n';
    else cout << (need - d) << '\n';
}

signed main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}