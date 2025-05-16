// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 
    

void solve(){
    int t, d, l; cin >> t >> d >> l;
    int canBeDownlodedLater = d*l;
    int rest = (t*l) - canBeDownlodedLater;
    int ans = ceil((double)rest/(double)d);

    cout << ans << '\n';
}

signed main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}