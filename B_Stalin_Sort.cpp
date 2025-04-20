// In The Name of Almighty Allah

#include <bits/stdc++.h>
#include <cstddef>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 
    

void solve(){
    int n; cin >> n;
    vector<int> v(n);
    for(auto &i: v) cin >> i;
    if(n == 1){
        cout << 0 << '\n';
        return;
    }
    int ans = INT_MIN, count;
    for(int i = 0; i < n-1; i++){
        count = 0;
        for(int j = i+1; j < n; j++){
            if(v[j] <= v[i]) count++;
        }
        ans = max(ans, count);
    }

    cout << n - (ans+1) << '\n';
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