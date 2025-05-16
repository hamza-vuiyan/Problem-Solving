// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 
    

void solve(){
    int n, k; cin >> n >> k;
    vector<int> v(n);
    for(auto &i: v) cin >> i;
    int target = v[--k];
    int ans = 0;
    for(int i = 0; i < n; i++){
        if(v[i] < 1) continue;
        if(v[i] >= target) ans++;
    }
    cout << ans << '\n';
}

signed main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}